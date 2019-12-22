class FactorialTrailingZeros {
    public int trailingZeroes(int n) {
        /*
        //don't know why it's not working
        int count = 0;
        for(int i = 5;  n / i >= 1; i*=5){
            count += n/i;
        }
        return count;
        
        */
        /*
        //working solun
        if(n == 0 )return 0;
        return n/5 + trailingZeroes(n/5);
        */
        int sum = 0;
        while(n >= 5){
            sum = sum + n / 5; 
            n = n / 5; 
        }
        return sum; 
    }
}