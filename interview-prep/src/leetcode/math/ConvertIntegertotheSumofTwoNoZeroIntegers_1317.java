package leetcode.math;

public class ConvertIntegertotheSumofTwoNoZeroIntegers_1317 {
    public int[] getNoZeroIntegers(int n) {
        int high = n - 1;
        int low = 1;
        while(true){
            if(hasContainZero(high) || hasContainZero(n-high)){
                high--;
                continue;
            }
            return new int[]{n-high, high};
//             if(high % 10 == 0 && (n - high) %10 == 0){

//             }
        }
    }
    boolean hasContainZero(int n){
        while(n != 0){
            if(n%10 == 0) return true;
            n = n / 10;
        }
        return false;
    }
}
