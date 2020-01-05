package leetcode.array;

public class FindWordsThatCanBeFormedbyCharacters_1160 {
    public int countCharacters(String[] words, String chars) {
        int count = 0;
        for(String word : words){
            count += ifCanBeFormedThenReturnLength(word, chars);
        }
        return count;
    }
    int ifCanBeFormedThenReturnLength(String word, String chars){
        int[] wordCountArray = charCountArray(word);
        int[] charsCountArray = charCountArray(chars);
        // for(int i = 0; i < word.length(); i++){
        //     charsCountArray[str.charAt(i) - 'a']--;
        //     wordCountArray[str.charAt(i) - 'a']--;
        // }
        for(int i = 0; i < 26; i++){
            if(wordCountArray[i] > 0){
                if(wordCountArray[i] > charsCountArray[i]) return 0;
            }
        }
        return word.length();
    }
    int[] charCountArray(String str){
        int[] countArray = new int[26];
        for(int i = 0; i < str.length(); i++){
            countArray[str.charAt(i) - 'a']++;
        }
        return countArray;
    }
}
