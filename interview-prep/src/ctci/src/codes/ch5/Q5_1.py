def bin(x):
    b = "";
    for i in range (33):
        # print(x & 1)
        b = str(x & 1) + b
        x = x >> 1
        # print(b)
    return b;

def compute(n, m, i, j):
    print("bin of n: ")
    print(bin(n))
    print("bin of m: ")
    print(bin(m))
    mask = m<<i 
    print("bin of mask: " )
    print(bin(mask))
    print("ans:")
    return n | mask
if __name__ == "__main__":
    # print(bin(-1))
    # print(bin(1))
    # print(bin(pow(2,32)-1))
    # print(bin(pow(2,32)))
    # print(bin(0))
    # print(bin(~0))
    n = pow(2, 10)
    m = 19
    i = 2
    j = 6
    
    print( bin(compute(n, m, i,j)) )

    /usr/lib/jvm/java-8-openjdk-amd64



