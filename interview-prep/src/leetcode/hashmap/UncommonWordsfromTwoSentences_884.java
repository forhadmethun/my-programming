package leetcode.hashmap;

import java.util.*;

public class UncommonWordsfromTwoSentences_884 {
    public String[] uncommonFromSentences(String A, String B) {
        String[] a = A.split(" ");
        String[] b = B.split(" ");
        HashMap<String, Integer> set = new HashMap<>();

        for(String s : a){
            set.put(s, set.getOrDefault(s,0) + 1);
        }

        for(String s : b){
            set.put(s, set.getOrDefault(s,0) + 1);
        }
        List<String> stringList = new ArrayList<>();


        int idx = 0;
        for(String s: set.keySet()){
            if(set.get(s) == 1){
                stringList.add(s);
            }
        }
        String[] result = new String[stringList.size()];

        for(String s : stringList){
            result[idx++] = s;
        }
        return result;

    }
}
