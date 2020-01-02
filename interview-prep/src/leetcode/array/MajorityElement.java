package leetcode.array;

import java.util.HashMap;
import java.util.Map;

class MajorityElement {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            if(map.containsKey(nums[i])){
                map.put(nums[i],map.get(nums[i]) + 1); 
            }else{
                map.put(nums[i], 1);
            }
        }
        int maxElement = Integer.MIN_VALUE; 
        int index = 0;
        for(int i : map.keySet()){
           
            if(map.get(i) > maxElement){
                maxElement = map.get(i);
                index = i;
            }
             // System.out.println("map.get(i): "+ i + ", " + map.get(i) + ", maxVal: " + maxElement);
        }
        return index;
    }
}