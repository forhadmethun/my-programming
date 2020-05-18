#!/usr/bin/env python3

import argparse, hashlib, sys, datetime # do not use any other imports/libraries

# took 3.0 hours (please specify here how much time your solution required)

# solution time: 182.3411526 sec

# parse arguments
parser = argparse.ArgumentParser(description='Proof-of-work solver')
parser.add_argument('--difficulty', default=0, type=int, help='Number of leading zero bits')
args = parser.parse_args()

# helper func
def nb(i, length=False):
    # converts integer to bytes
    b = b''
    if length==False:
        length = (i.bit_length()+7)//8
    for _ in range(length):
        b = bytes([i & 0xff]) + b
        i >>= 8
    return b

def now():
    return datetime.datetime.now()

def timediff(s):
    return (datetime.datetime.now()-s).total_seconds()

# print(args.difficulty)
difficulty = args.difficulty
input = '41726e69732055540000000003bb67af'
solution = '00000031fc8ad63fa6070e341ccddd55bc36ac0b1e94965f2a8bb624d1a51071'
nonce = 62613423
def hashFunction(x):
    return hashlib.sha256(hashlib.sha256(x).digest()).hexdigest()
nonce = 0
input = b'Aivar UT' + nb(nonce,8)
print("[+] Input:", input)
# s = now()
computed_hash = hashFunction(input)
# hashCalculateTime =  (timediff(s))
# mhashps = (1/ hashCalculateTime)/1000000
# (b'Arnis UT' + nb(62613423,8))

s = now()
while not bin(int(computed_hash, 16))[2:].zfill(len(computed_hash)*4).startswith('0' * difficulty):
# while not computed_hash.startswith('0' * 6):
    nonce += 1
    # computed_hash = hashFunction(computed_hash)
    input = b'Aivar UT' + nb(nonce,8)
    computed_hash = hashFunction(input)
solveTime = (timediff(s))
mhashps = (nonce/ solveTime)/1000000

print("[+] Solved in %s sec (%s Mhash/sec)" % (solveTime, mhashps))
print("[+] Solution:", computed_hash)
print("[+] Nonce:", nonce)


