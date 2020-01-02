package leetcode.array;

import java.util.*;
class PlusOne {
    public int[] plusOne(int[] digits) {
        List<Integer> list = new ArrayList(); 
        int count = 0;
        int sum = digits[digits.length - 1] + 1;
        list.add(sum%10);
        count = sum / 10;
        for(int i = digits.length - 2; i >=0 ; i--){
             sum = digits[i] + count;
            list.add(sum%10);
            count = sum / 10;     
            
        }
        if(count > 0){
            list.add(count);
        }
        int len = list.size();
        int[] out = new int[len]; 
        
        for(int i = len - 1; i>=0; i--){
            
            out[len - i - 1] = list.get(i);
        }
            return out;
    }
}