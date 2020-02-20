#!/usr/bin/env python
import sys   # do not use any other imports/libraries

# took x.y hours (please specify here how much time your solution required)

_type_class_universal = 0
_type_class_application = 1 << 6
_type_class_context_defined = 2 << 6
_type_class_context_private = 3 << 6

_type_form_primitive = 0 << 5
_type_form_constructed = 1 << 5

def nb(value_bytes):
    integer_to_encode_as_byte_list = []
    while value_bytes != 0:
        integer_to_encode_as_byte_list.insert(0, value_bytes & 255)
        value_bytes = value_bytes >> 8
    b = bytes(integer_to_encode_as_byte_list)
    return b

def asn1_len(value_bytes):
    # helper function - should be used in other functions to calculate length octet(s)
    # value_bytes - bytes containing TLV value byte(s)
    # returns length (L) byte(s) for TLV
    if value_bytes < 128:
        b = bytes([value_bytes])
    else:
        integer_to_encode_as_byte = nb(value_bytes)
        b = bytes([(1<<7 | len(integer_to_encode_as_byte))]) + integer_to_encode_as_byte
    return b

def asn1_boolean(bool):
    # BOOLEAN encoder has been implemented for you
    if bool:
        bool = b'\xff'
    else:
        bool = b'\x00'
    return bytes([0x01]) + asn1_len(bool) + bool

def asn1_null():
    # returns DER encoding of NULL
    return bytes([0x05]) #+ asn1_len(len(octets)) + octets

def asn1_integer(i):
    # i - arbitrary integer (of type 'int' or 'long')
    # returns DER encoding of INTEGER
    integer_to_encode_as_byte = nb(i)
    if((integer_to_encode_as_byte[0] & (1 << 7)) > 0):
            integer_to_encode_as_byte = bytes([0x00]) + integer_to_encode_as_byte
    length = len(integer_to_encode_as_byte)
    return bytes([0x02]) + asn1_len(length) + integer_to_encode_as_byte

def bin_string_to_int(str):
    val = 0
    power_of_two = 1
    for i in range(len(str) - 1, -1, -1):
        val = val + (ord(str[i]) - 48) * power_of_two
        power_of_two = power_of_two * 2
    return val
def asn1_bitstring(bitstr):
    # bitstr - string containing bitstring (e.g., "10101")
    # returns DER encoding of BITSTRING
    count = 0
    string_length = len(bitstr)
    byte_len = 0
    while count < string_length:
        count += 8
        byte_len+=1
    pad_length = count - string_length
    for i in range(0, pad_length):
        bitstr = bitstr + '0'

    str_list = [bitstr[i: i + 8] for i in range(0, len(bitstr), 8)]
    int_list = []
    for s in str_list:
        int_list.append(bin_string_to_int(s))

    integer_to_encode_as_byte = bytes(int_list)
    integer_to_encode_as_byte = (nb(pad_length) if pad_length > 0 else bytes([0x00])) + integer_to_encode_as_byte
    return bytes([0x03]) + asn1_len(1 + (byte_len)) + integer_to_encode_as_byte

def asn1_octetstring(octets):
    # octets - arbitrary byte string (e.g., b"abc\x01")
    # returns DER encoding of OCTETSTRING
    return bytes([0x04]) + asn1_len(len(octets)) + octets


def int_to_bin_string(int):
    if(int == 0):
        return '0'
    val = ''
    while(int != 0):
        val = (chr( (int % 2) + 48) ) + val
        int = int >> 1
    return val



def asn1_objectidentifier(oid):
    # oid - list of integers representing OID (e.g., [1,2,840,123123])
    # returns DER encoding of OBJECTIDENTIFIER
    int_list = []
    for i in range(2, len(oid)):
        bitstr = int_to_bin_string(oid[i])

        count = 0
        string_length = len(bitstr)
        byte_len = 0
        while count < string_length:
            count += 7
            byte_len += 1
        pad_length = count - string_length
        for i in range(0, pad_length):
            bitstr = '0' + bitstr

        str_list = [bitstr[i: i + 7] for i in range(0, len(bitstr), 7)]
        for j in range(0, len(str_list)):
            if(j == len(str_list) -1 ):
                str_list[j] = '0' + str_list[j]
            else:
                str_list[j] = '1' + str_list[j]

        for s in str_list:
            int_list.append(bin_string_to_int(s))
    integer_to_encode_as_byte = bytes(int_list)
    integer_to_encode_as_byte = bytes([oid[0] * 40 + oid[1]]) + integer_to_encode_as_byte

    return bytes([0x6]) + asn1_len(len(integer_to_encode_as_byte)) + integer_to_encode_as_byte

def asn1_sequence(der):
    # der - DER bytes to encapsulate into sequence
    # returns DER encoding of SEQUENCE
    return bytes([0x10|_type_form_constructed]) + asn1_len(len(der)) + der

def asn1_set(der):
    # der - DER bytes to encapsulate into set
    # returns DER encoding of SET
    return bytes([0x11|_type_form_constructed]) + asn1_len(len(der)) + der

def asn1_printablestring(string):
    # string - bytes containing printable characters (e.g., b"foo")
    # returns DER encoding of PrintableString
    return bytes([0x13]) + asn1_len(len(string)) + string


def asn1_utctime(time):
    # time - bytes containing timestamp in UTCTime format (e.g., b"121229010100Z")
    # returns DER encoding of UTCTime
    return bytes([0x17]) + asn1_len(len(time)) + time


def asn1_tag_explicit(der, tag):
    # der - DER encoded bytestring
    # tag - tag value to specify in the type octet
    # returns DER encoding of original DER that is encapsulated in tag type

    return bytes([_type_class_context_defined|_type_form_constructed|tag]) + asn1_len(len(der)) + der


# figure out what to put in '...' by looking on ASN.1 structure required (see slides)
#asn1 = asn1_tag_explicit(asn1_sequence(... + asn1_boolean(True) + asn1_bitstring("110") ...), 0)
#open(sys.argv[1], 'wb').write(asn1)
