package leetcode;

class LengthOfLastWord {
    public int lengthOfLastWord(String s) {
        String[] tokens = s.split(" "); 
        return tokens.length > 0 ? tokens[tokens.length - 1].length() : 0;
    }
}