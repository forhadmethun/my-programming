package leetcode.hashmap;
import java.util.*;

public class NRepeatedElementinSize2NArray_961 {
    public int repeatedNTimes(int[] A) {
        Map<Integer, Integer> countMap = new HashMap<>();
        int mostlyRepeatedElementCount = -1, mostlyRepeatedElement = 0;
        for(int i = 0; i < A.length; i++){
            int currentElementCount = countMap.getOrDefault(A[i], 0) + 1;
            if(mostlyRepeatedElementCount < currentElementCount){
                mostlyRepeatedElementCount  = currentElementCount;
                mostlyRepeatedElement = A[i];
                if(mostlyRepeatedElementCount >= 2) break;
            }
            countMap.put(A[i], currentElementCount);


        }
        return mostlyRepeatedElement;
    }
}
