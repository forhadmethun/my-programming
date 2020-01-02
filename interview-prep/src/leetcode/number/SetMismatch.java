package leetcode.number;
import java.util.*;

class SetMismatch {
    public int[] findErrorNums(int[] nums) {
        Arrays.sort(nums); 
        Set<Integer> set = new HashSet<>(); 
        int i;
        for( i = 0; i < nums.length; i++){
            set.add(nums[i]);
        }
        for(i = 1; i < nums.length; i++){
            if(nums[i] == nums[i-1]){
                break;    
            }
        }
        int[] out = new int[2]; 
        out[0] = nums[i]; 
        for(i = 0; i < nums.length; i++){
            if(!set.contains(i+1)){
                out[1] = i+1; 
                break;
            }
        }
        
        
        // out[1] = i + 1;
        return out;
    }
}