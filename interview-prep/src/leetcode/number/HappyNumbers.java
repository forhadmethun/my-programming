package leetcode.number;
import java.util.*;

class HappyNumbers {
    public boolean isHappy(int n) {
        Set<Integer> alreadyComputedNumbers = new HashSet(); 
        alreadyComputedNumbers.add(n);
        while(n != 1){
            int computedValue = getSquareSumOfAllDigits(n); 
            if(alreadyComputedNumbers.contains(computedValue)){
                return false;
            }
            n = computedValue;
            alreadyComputedNumbers.add(n);
            
        }
        return true;
    }
    public int  getSquareSumOfAllDigits(int n){
        int sum = 0; 
        while(n != 0){
            sum += (n%10) * (n%10); 
            n = n / 10; 
        }
        return sum;
    }
}