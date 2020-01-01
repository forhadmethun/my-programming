// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution4 {
    public static int solution(int N) {
        // write your code in Java SE 8
        boolean isNegative = false;
        if(N < 0){
            N = N * -1;
            isNegative = true;
        }
        String number = Integer.toString(N);
        int length = number.length();
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < length + 1; i++){
            int currentNumber = Integer.valueOf(number.substring(0,i) + String.valueOf(5) + number.substring(i,length));
            if(currentNumber > max){
                max = currentNumber;
            }
            if(currentNumber < min){
                min = currentNumber;
            }
        }
        if(isNegative){
            return -1 * min;
        }
        return max;
    }

    public static void main(String[] args) {
        System.out.println(solution(268));
        System.out.println(solution(670));
        System.out.println(solution(0));
        System.out.println(solution(-999));
        System.out.println(solution(-8000));
        System.out.println(solution(8000));
    }
}
