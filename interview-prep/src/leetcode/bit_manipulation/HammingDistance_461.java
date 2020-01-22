package leetcode.bit_manipulation;

public class HammingDistance_461 {
    public int hammingDistance(int x, int y) {
        int hammingDistance = 0;
        while(true){
            if(x == 0 && y == 0){
                break;
            }
            int lastBitOfX = x & 1;
            int lastBitOfY = y & 1;
            if(lastBitOfX != lastBitOfY){
                hammingDistance++;
            }
            x >>= 1;
            y >>= 1;
        }
        return hammingDistance;

    }
}
