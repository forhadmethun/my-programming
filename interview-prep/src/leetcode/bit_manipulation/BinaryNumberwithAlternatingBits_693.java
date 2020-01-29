package leetcode.bit_manipulation;

public class BinaryNumberwithAlternatingBits_693 {
    public boolean hasAlternatingBits(int n) {
        int x = n;
        int bitCount = 0;
        while(x !=0){
            bitCount++;
            x >>= 1;
        }
        int startingBit = ((n & 1) > 0) ? 1 : 0;
        boolean isAltarnative = true;
        for(int i = 0; i < bitCount; i++){
            int currentBit = ( (n & 1) > 0) ? 1 : 0;
            if(startingBit != currentBit)return false;

            if(startingBit == 1){
                startingBit = 0;
            }else{
                startingBit = 1;
            }
            n >>= 1;
        }
        return true;
    }
}
