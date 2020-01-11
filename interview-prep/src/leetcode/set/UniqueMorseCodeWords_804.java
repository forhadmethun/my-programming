package leetcode.set;
import java.util.*;

public class UniqueMorseCodeWords_804 {
    public int uniqueMorseRepresentations(String[] words) {
        String[] codeArray = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> set = new HashSet<>();
        for(String word : words){
            StringBuilder sb = new StringBuilder();
            for(char c : word.toCharArray()){
                sb.append(codeArray[(int)(c-'a')]);
            }
            set.add(sb.toString());
        }
        return set.size();
    }
}
