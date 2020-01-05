package leetcode.hashmap;
import java.util.*;

public class MaximumNumberBalloons_1189 {
    public int maxNumberOfBalloons(String text) {
        Map<Character, Integer> map = new HashMap<>();
        int lCount = 0, oCount = 0;
        for(char c: text.toCharArray()){
            if(c == 'b' || c == 'a' || c == 'n'){
                map.put(c, map.getOrDefault(c, 0) + 1);
            }
            else if(c == 'l'){
                lCount++;
                if(lCount == 2){
                    lCount = 0;
                    map.put(c, map.getOrDefault(c, 0) + 1);
                }
            }
            else if(c == 'o'){
                oCount++;
                if(oCount == 2){
                    oCount = 0;
                    map.put(c, map.getOrDefault(c, 0) + 1);
                }
            }
        }
        int count = Integer.MAX_VALUE;
        int characterCount = 0;
        for(Map.Entry<Character, Integer> entry: map.entrySet()){
            //System.out.println(entry.getKey() + " : " + entry.getValue());
            characterCount = (characterCount + 1);
            count = Math.min(count, entry.getValue());
        }
        if(count == Integer.MAX_VALUE || characterCount != 5) return 0;
        else return count;

    }
}
