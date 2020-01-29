package leetcode.array;
import java.util.*;
public class RankTransformofanArray_1331 {
    public int[] arrayRankTransform(int[] arr) {
        Set<Integer> set = new TreeSet<>();
        for(int a : arr){
            set.add(a);
        }
        Map<Integer, Integer> map = new HashMap<>();
        int size = 1;
        for(int s : set){
            map.put(s, size++);
        }
        for(int i = 0; i < arr.length; i++){
            arr[i] = map.get(arr[i]);
        }
        return arr;
    }
}
