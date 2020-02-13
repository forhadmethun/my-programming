package leetcode.bit_manipulation;
// can be easily solvable by bitwise ^
public class FindtheDifference_389 {
    public char findTheDifference(String s, String t) {
        /*
        int[] charList = new int[26];
        for(char c : t.toCharArray()){
            charList[c-'a']++;
        }
        for(char c : s.toCharArray()){
            charList[c-'a']--;
        }
        char ch = 'a';
        for(int i = 0 ; i < 26; i++){
            if(charList[i] > 0){
                ch = (char)('a' + i);
            }
        }
        return ch;
        */
        char ch = 0; int i;
        for(i = 0; i < s.length(); i++){
            ch ^= s.charAt(i);
            ch ^= t.charAt(i);
        }
        ch ^= t.charAt(i);
        return ch;

    }
}
