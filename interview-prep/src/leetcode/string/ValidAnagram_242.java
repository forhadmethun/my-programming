package leetcode.string;

public class ValidAnagram_242 {
    public boolean isAnagram(String s, String t) {
        /*
        char[] S = s.toCharArray();
        char[] T = t.toCharArray();
        Arrays.sort(S); Arrays.sort(T);
        //char ch = 'ই';
        //System.out.println(ch);
       return new String(S).equals(new String(T));
       */
        if(s.length()!=t.length())return false;
        int[] S = new int[26];
        // int[] T = new int[26];
        for(char c : s.toCharArray()){
            S[c-'a']++;
        }
        for(char c : t.toCharArray()){
            S[c-'a']--;
        }
        for(int i = 0; i < 26; i++)
            if(S[i] >0) return false;
        return true;
    }
}