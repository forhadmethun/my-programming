package leetcode.string;
//todo solve with regex
public class DetectCapital_520 {
    public boolean detectCapitalUse(String word) {
        if(isAllCapital(word) || isFirstCapitalOtherSmall(word) || isAllSmall(word))return true;
        return false;
    }
    boolean isAllCapital(String word){
        for(int i = 0; i < word.length();i++){
            if(!(word.charAt(i) >= 'A' && word.charAt(i) <='Z')) return false;
        }
        return true;
    }
    boolean isFirstCapitalOtherSmall(String word){
        return isAllCapital(word.substring(0,1)) && isAllSmall(word.substring(1));
    }
    boolean isAllSmall(String word){
        for(int i = 0; i < word.length();i++){
            if(!(word.charAt(i) >= 'a' && word.charAt(i) <='z')) return false;
        }
        return true;
    }
}
