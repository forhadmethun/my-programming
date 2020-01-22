package leetcode.string;

public class ReverseWordsinaStringIII_557
{
    public String reverseWords(String s) {
        String[] wordList = s.split(" ");
        StringBuilder outputList = new StringBuilder();
        int i = 0;
        for(String word : wordList){
            outputList.append(new StringBuilder(word).reverse().toString());
            if(i++ < wordList.length - 1) outputList.append(" ");
        }
        return outputList.toString();
    }
}
