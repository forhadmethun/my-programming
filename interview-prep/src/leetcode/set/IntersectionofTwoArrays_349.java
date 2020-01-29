package leetcode.set;
import java.util.*;
public class IntersectionofTwoArrays_349 {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<>();
        for(int num : nums1){
            set.add(num);
        }
        Set<Integer> outputList = new HashSet<>();
        for(int num : nums2){
            if(set.contains(num)){
                outputList.add(num);
            }
        }
        /*
        List<String> list = ..;
        String[] array = list.toArray(new String[0]);
        */
        //int[] output =  outputList.toArray(int[]::new); //new int[0]);
        //int[] output1 = outputList.stream().toArray(int[]::new);
        int[] output1 = new int[outputList.size()];
        int idx = 0;
        for(int num : outputList){
            output1[idx++] = num;
        }

        return output1;
    }
}
