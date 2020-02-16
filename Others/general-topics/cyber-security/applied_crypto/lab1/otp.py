#!/usr/bin/env python3
import os, sys       # do not use any other imports/libraries
# took x.y hours (please specify here how much time your solution required)

def bn(b):
    # b - bytes to encode as integer
    # your implementation here
    i = 0
    print("---- start: bn(n) meth0d -----", )
    for c in b:
        i = (i << 8) | c
        print(i)
    print("---- end: bn(n) meth0d -----")

    return i

def nb(i, length):
    # i - integer to encode as bytes
    # length - specifies in how many bytes the number should be encoded
    # your implementation here
    b = b''
    list = []
    print("---- !!!! start: nb(n) meth0d!!! -----", )
    while length != 0:
        list.insert(0, i & 255)
        i = i >> 8
        length = length - 1
        print(i)
    print("---- !!!! end: nb(n) meth0d!!! -----", )
    print(": list : ", list)
    b = bytes(list)
    # b = b.decode("utf-8")
    # print('decoded')
    # print(b.decode("utf-8"))
    # print(len(b))

    # print(b[0])
    # print(b[1])

    return b

def encrypt(pfile, kfile, cfile):
    # your implementation here
    b =  open(pfile, 'rb').read()
    print('datafile content')
    print(b)
    b_text = b.decode()
    print('decoded data file')
    print(b_text)
    print("lenth of the byte from the file ", len(b))
    print("-------- start byte from the file ----------------")
    print(list(b))
    # for bb in b:
    #     print(bb)
    print("-------- end ----------------")

    print('data file to integer')
    print(bn(b))
    text_byte_to_int = bn(b)
    rand = os.urandom(len(b_text))
    print('start: random key with same lenght of data file')
    print(list(rand))
    print('end: random kety: ')
    # # print(rand.decode())
    # print(rand[0])
    # print(rand[1])
    # print('rand length')
    # print(len(rand))
    random_byte_to_int = bn(rand)
    # print('text byte to int')
    # print(text_byte_to_int)
    # print('random byte to int')
    # print(random_byte_to_int)
    xor = text_byte_to_int ^ random_byte_to_int
    print('cipher text', xor)
    # print(xor)

    key_file = open(kfile, 'wb')
    ciphertext_file = open(cfile, 'wb')
    key_file.write(rand)
    print("length random: ", len(rand))
    print("length plaintext: ", len(b_text))
    NB = nb(xor, len(b_text))
    # print('cipher in byte')
    print("cipher byte list: " , list(NB))
    ciphertext_file.write(NB)



    # rand = os.urandom(len(str(bn)))



    #pass

def decrypt(cfile, kfile, pfile):
    # your implementation here
    cipher_in_byte = open(cfile, 'rb').read()
    # print('datafile content')
    # print(cipher_in_byte[0])
    # print(cipher_in_byte[1])

    key_in_byte = open(kfile, 'rb').read()
    # print('datafile content')
    # print(key_in_byte[0])
    # print(key_in_byte[1])

    cipher_in_number  = bn(cipher_in_byte)
    key_in_number = bn(key_in_byte)

    original_text_in_number = cipher_in_number ^ key_in_number

    original_text_in_byte = nb(original_text_in_number,len(cipher_in_byte))
    # print('original')
    # print(type(original_text_in_byte))
    # print(original_text_in_byte[0])
    # print(original_text_in_byte[1])
    # print(original_text_in_byte.decode())
    original_text = original_text_in_byte.decode()
    orignal_text_file = open(pfile, 'w+')
    orignal_text_file.write(original_text)


    # b_text = b.decode()
    # print('decoded data file')
    # print(b_text)
    # pass

def usage():
    print("Usage:")
    print("encrypt <plaintext file> <output key file> <ciphertext output file>")
    print("decrypt <ciphertext file> <key file> <plaintext output file>")
    sys.exit(1)

if len(sys.argv) != 5:
    usage()
elif sys.argv[1] == 'encrypt':
    encrypt(sys.argv[2], sys.argv[3], sys.argv[4])
elif sys.argv[1] == 'decrypt':
    decrypt(sys.argv[2], sys.argv[3], sys.argv[4])
else:
    usage()
