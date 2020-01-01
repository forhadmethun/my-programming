
class ReverseInteger {
    public int reverse(int x) {
        int rev = reverseUtil(x);
        return rev;
    }
    public int reverseUtil(int x){
                boolean isNegative = false;
        if( x < 0 ){
            isNegative = true; 
            x = -1 * x;
        }
        int reverse = 0;
        while( x != 0){
            int dummyReverse = reverse;
            reverse = reverse * 10 + x % 10; 
            if((reverse - x %10 )/10 != dummyReverse){
                return 0;
            }
            x = x / 10; 
        }
        return isNegative ? -reverse : reverse;
    }
}