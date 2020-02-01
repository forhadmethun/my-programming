package leetcode.hashmap;
import java.util.*;
public class VerifyinganAlienDictionary_953 {
    public boolean isAlienSorted(String[] words, String order) {
        Map<Character, Integer> map = new HashMap<>();
        int weight = 0;
        for(char c : order.toCharArray()){
            map.put(c, weight++);
        }

        if(words.length <= 1) return true;
        for(int i = 1; i < words.length; i++){
            String first = words[i-1];
            String second = words[i];
            /*
                 hello
                 hello
            */
            if(first.equals(second)) continue;

            /*
                hellom
                hel
            */
            if(first.length() > second.length()){
                if(first.contains(second)) return false;
            }
            int min = Math.min(first.length(), second.length());

            for(int j = 0; j < min ; j++){
                // for(int j = 0; j < min; j++){
                // System.out.println( " " + map.get(first.charAt(j)) + " " + map.get(second.charAt(j)));
                if(map.get(first.charAt(j)) < map.get(second.charAt(j))){
                    break;
                }

                if(map.get(first.charAt(j)) > map.get(second.charAt(j))){
                    return false;
                }
                // }
            }
        }
        return true;
    }
}
