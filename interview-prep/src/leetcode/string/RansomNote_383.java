package leetcode.string;

public class RansomNote_383 {
    public boolean canConstruct(String ransomNote, String magazine) {
        int[] countArray = new int[26];
        for(char c : magazine.toCharArray()){
            countArray[c - 'a']++;
        }
        for(char c : ransomNote.toCharArray()){
            countArray[c - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(countArray[i] < 0) return false;
        }
        return true;
    }
}
