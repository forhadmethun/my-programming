package leetcode.array;
import java.util.*;
public class UniqueNumberofOccurrences_1207 {
    public boolean uniqueOccurrences(int[] arr) {

        Map<Integer, Integer> map = new HashMap<>();

        for(int i = 0; i < arr.length; i++){
            map.put(arr[i], map.getOrDefault(arr[i],0)+1);
        }

        Set<Integer> set = new HashSet<>();

        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            if(set.contains(entry.getValue())){
                return false;
            }
            set.add(entry.getValue());
        }

        return true;

    }
}
