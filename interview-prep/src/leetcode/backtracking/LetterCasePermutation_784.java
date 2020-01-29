package leetcode.backtracking;
import java.util.*;
public class LetterCasePermutation_784 {
    public List<String> letterCasePermutation(String S) {
        LinkedList<String> r = new LinkedList<>();
        r.add(S);
        for(int j = 0; j < S.length(); j++){
            char c = S.charAt(j);
            if(Character.isLetter(c)){
                for(int i = r.size(); i > 0; i--){
                    String s = r.poll(), first = s.substring(0, j), last  = s.substring(j+1);
                    r.add(first + Character.toLowerCase(c)+ last);
                    r.add(first + Character.toUpperCase(c)+ last);
                }
            }
        }
        return r;
    }

    /*
    public List<String> letterCasePermutation(String S) {
        LinkedList<String> r = new LinkedList<>();
        r.add(S);
        for (int i = 0; i < S.length(); i++) {
            char c = S.charAt(i);
            if (Character.isLetter(c))
                for (int size = r.size(); size > 0; size--) {
                    String s = r.poll(), left = s.substring(0, i), right = s.substring(i + 1);
                    r.add(left + Character.toLowerCase(c) + right);
                    r.add(left + Character.toUpperCase(c) + right);
                }
        }
        return r;
    }*/
}
