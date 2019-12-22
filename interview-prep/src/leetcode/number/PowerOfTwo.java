class PowerOfTwo{
    public boolean isPowerOfTwo(int n) {
        /*
        //TLE
        int x = 1; 
        while(x != n){
            if(x > n) return false;
            x = x * 2;
        }
        return true;
        */
         if(n < 0 ) return false;
        if(bitCount(n) == 1)return true; 
        return false;
    }
    public int bitCount(int n){
       
        int count = 0; 
        while(n != 0){
            count += (n & 1); 
          //  System.out.println("n: " + n + " bitcount:  " + count);
            n = n >>> 1;
        }
        return count;
    }
}