package leetcode.array;
import java.util.*;

public class FindCommonCharacters_1002 {
    public List<String> commonChars(String[] A) {
        List<String> outputList = new ArrayList<>();
        for(int i = 0; i < 26; i++){
            int count = Integer.MAX_VALUE;
            char c =(char) ((int)'a' + i);
            boolean contains = true;
            for(String s : A){
                if(s.indexOf(c)>=0){
                    count = Math.min(count, count(s, c));
                }else{
                    contains = false;
                    break;
                }
            }
            if(contains){
                while(count-- >0){
                    outputList.add(c+"");
                }
            }
        }
        /*
        char[] outputArray = new char[outputList.size()];
        int i = 0;
        for(Character c: outputList){
            outputArray[i++] = c;
        }*/
        return outputList;
    }
    int count(String s, char c){
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == c)count++;
        }
        return count;
    }
}
