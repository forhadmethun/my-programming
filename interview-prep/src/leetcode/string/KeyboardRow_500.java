package leetcode.string;
import java.util.*;
public class KeyboardRow_500 {
    public String[] findWords(String[] words) {
        String[] rows = {
                "qwertyuiop",
                "asdfghjkl",
                "zxcvbnm"
        };
        List<String> result = new ArrayList<>();
        for(String word : words){

            for(String row : rows){
                boolean found = true;
                for(char c : word.toLowerCase().toCharArray()){
                    if(!row.contains(c+"")){
                        found = false;
                        break;
                    }
                }
                if(found){
                    result.add(word);
                    break;
                }
            }
        }
        String[] output = new String[result.size()];
        for(int i = 0; i < result.size(); i++){
            output[i] = result.get(i);
        }
        return output;
    }
}
