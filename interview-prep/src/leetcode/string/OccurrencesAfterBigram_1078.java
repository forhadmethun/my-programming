package leetcode.string;
import java.util.*;
public class OccurrencesAfterBigram_1078 {
    public String[] findOcurrences(String text, String first, String second) {
        String[] arr = text.split(" ");
        List<String> out = new ArrayList<>();
        for(int i = 0; i < arr.length - 1; i++){
            if(arr[i].equals(first) && arr[i+1].equals(second)){
                if(i + 2 < arr.length){
                    out.add(arr[i+2]);
                }
            }
        }
        String[] outputArray = new String[out.size()];
        int i = 0;
        for(String str: out){
            outputArray[i++] = str;
        }
//        out.toArray(new String[0]);
        return outputArray;
    }
}
