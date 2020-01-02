### Bit Manipulation
 - bit manipulation by hand
 - bit facts & tricks
 - two's complement & negative number
 - arithmetic vs logical shift
 - common bit tasks
   - get bit
   - set big
   - clear bit
   - update bit


### Questions

--- 

- [ ] Q5.1 Given two 32 bit numbers, N & M, and two bit positions, i and j. Write a method to insert M into N such that M starts at bit j and ends at bit i. 
  ``` 
  Input: N = 10000000000, M = 10011, i =2, j =6
  Output: N = 1001001100
  ```

- [ ] Q5.2 Convert real number which is presented as double to binary (eg. 0.72). If number cannot be represented accurately in binary with the most 32 characters, print "ERROR".

- [ ] Q5.3 Given an integer and exactly one bit can be flipped. Find length of longest sequence of 1s can be created
``` 
Input:  1775 (or, 11011101111)
Output: 8

```

- [ ] Q5.4 Given a positive integer, print the next smallest and the next largest number that have the same number of 1 bits in their binary representation. 


- [ ] Q5.5 Explain ((n & (n-1)) == 0)

- [ ] Q5.6 Write a function to determine the number of bits you would need to flip to convert integer A to integer B. 
 ``` 
    Input: 29 (11101) , 15(01111)
    Output: 2
    
    
 ```

- [ ] Q5.7 Write a program to swap odd and even bits in an integer with as few instructions as possible. Ex. bit 0 and bit 1 are swapped, bit 2 & bit 3  

- [ ] Q5.8 A single array of bytes represent monochrome screen allowing eight consecutive pixels to be stored in one byte. The screen width is w divisible by 8. Implement a function that draws a horizontal line from (x1,y) to (x2,y)
``` 
    drawLine(byte[] screen, int width, int x1,int x2, int y)
```