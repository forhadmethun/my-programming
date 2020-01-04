package leetcode.array;
import java.util.*;

public class ElementOccuredMoreThan25Percent_1287 {
    public int findSpecialInteger(int[] arr) {
           /*
        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i < arr.length; i++){
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        int element = 0, count;
        int max = Integer.MIN_VALUE;

        for(Map.Entry<Integer, Integer> entry: map.entrySet()){
            if(entry.getValue() > max){
                element = entry.getKey();
                max = entry.getValue();
            }
        }
        return element;
        */
        int cur = arr[0];
        int count = 1;
        for(int i = 1; i < arr.length; i++){
            if(arr[i] == cur){
                count++;
            }
            else{
                cur = arr[i];
                count = 1;
            }
            if(count > arr.length / 4){
                return arr[i];
            }
        }
        return arr[0];
    }
}
