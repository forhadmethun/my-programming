package leetcode.array;
import java.util.*;

public class MinimumAbsoluteDifference_1200 {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr);
        int minDiff = Integer.MAX_VALUE;
        for(int i = 1; i < arr.length; i++){
            if(arr[i] - arr[i-1] < minDiff){
                minDiff = arr[i] - arr[i-1];
            }
        }
        List<List<Integer>> output = new ArrayList<>() ;
        for(int i = 1; i < arr.length; i++){
            if(arr[i] - arr[i-1] ==  minDiff){
                output.add(Arrays.asList(arr[i-1], arr[i]));
            }
        }
        return output;
    }
}
