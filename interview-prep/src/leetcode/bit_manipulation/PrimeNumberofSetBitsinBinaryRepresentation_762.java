package leetcode.bit_manipulation;

class PrimeNumberofSetBitsinBinaryRepresentation_762{
        public int countPrimeSetBits(int L, int R) {
            boolean[] isPrime = new boolean[33]; 
            for(int i = 0; i < 33; i++){
                isPrime[i] = true; 
            }
            isPrime[0] = false;
            isPrime[1] = false;
            for(int i = 2; i < 33; i++){
                if(isPrime[i]){
                    for(int j = i * i ; j < 33; j+=i){
                        isPrime[j] = false;
                    }
                }
            }
            int result = 0;
            for(int i = L; i <= R; i++){
                if(isPrime[bitCount(i)])result++;
            }
            return result; 
            
        }
        int bitCount(int n){
            int count = 0;
            while(n!=0){
                if((n & 1) > 0)count++;
                n >>= 1;
            }
            return count;
        }
}