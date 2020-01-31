package leetcode.hashmap;
import java.util.*;
public class ShortestCompletingWord_748 {
    public String shortestCompletingWord(String lp, String[] words) {
        String s = "";
        for(char c : lp.toCharArray()){
            if(Character.isLetter(c)){
                s+=Character.toLowerCase(c);
            }
        }
        char[] c = s.toCharArray();
        Arrays.sort(c);
        s  = new String(c);
        TreeMap<Integer, String> map = new TreeMap<>();

        for(String str : words){
            if(isMatch(str, s)){

                System.out.println("str: " + str + ", :lp: " + s);
                if(map.get(str.length())==null){
                    map.put(str.length(), str);
                }
            }

        }
        //System.out.println(map.pollFirstEntry().getValue());
        //System.out.println(map.firstKey());
        return map.pollFirstEntry().getValue();
    }


    boolean isMatch(String str, String lp){
        int[] s = new int[26];
        int[] l = new int[26];
        for(char c : str.toCharArray()){
            s[c-'a']++;
        }
        for(char lc : lp.toCharArray()){
            l[lc-'a']++;
        }

        //lp
        for(char lc : lp.toCharArray()){
            if(s[lc-'a'] > 0){
                l[lc-'a']--;
                s[lc-'a']--;
            }
        }

        for(int i = 0; i < 26; i++){
            if(l[i] > 0) return false;
        }
        for(int i = 0; i < 26; i++){
            if(s[i] < 0) return false;
        }
        return true;

    }
}
