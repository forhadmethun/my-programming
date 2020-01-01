public class NumberOf1Bits {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        //if(n < 0) return 0;
        //System.out.println(n);
        int b = 1; 
        int count = 0;
        while(n != 0){
            if((b & n) == 1) count++;
            n = n >>> 1;
        }
        return count;
    }
}