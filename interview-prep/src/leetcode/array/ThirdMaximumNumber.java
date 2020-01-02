package leetcode.array;

import java.util.*;

class ThirdMaximumNumber {
    public int thirdMax(int[] nums) {
        int len = nums.length;
        if(len == 1){
            return nums[0]; 
        }
        if(len == 2){
            return nums[0] > nums[1] ? nums[0] : nums[1];
        }
        
        Integer[] arr = new Integer[]{null, null, Integer.MIN_VALUE}; 
        Set<Integer> set = new HashSet<>();
        for(int i = 0; i < nums.length; i++){
            set.add(nums[i]);
            if((arr[0]!= null && nums[i] == arr[0]) || (arr[1] !=null && nums[i] == arr[1]) ||  (arr[2] !=null && nums[i] == arr[2])) continue;
            if(nums[i] >= arr[2]){
                arr[0] = arr[1];
                arr[1] = arr[2]; 
                arr[2] = nums[i];
            }
            else if(arr[1] != null && nums[i] >= arr[1]){
                arr[0] = arr[1];
                arr[1] = nums[i]; 
            }
            else if(arr[0] !=null && nums[i] >= arr[0]){
                arr[0] = nums[i];
            }
        }
        
       // System.out.println(Integer.MIN_VALUE);
       // System.out.println("0:" + arr[0]);
        //System.out.println("1:" + arr[1]);
      //  System.out.println("2:" + arr[2]);
        if(set.size()<=2) return arr[2];
        return arr[0] == null ? arr[2] : arr[0];                        
    }
}