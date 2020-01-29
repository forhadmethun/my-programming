package leetcode.string;

public class GoatLatin_824
{
    public String toGoatLatin(String S) {
        String[] sarr = S.split(" ");
        StringBuilder result = new StringBuilder();
        String a = "a";
        boolean addSpace = false;
        for(String s : sarr){

            if(addSpace == false){
                addSpace = true;
            }else{
                result.append(" ");
            }

            if(isVowel(s.charAt(0))){
                result.append(s+"ma");
            }else{
                result.append(s.substring(1)+s.charAt(0)+"ma");
            }
            result.append(a);
            a += "a";
        }
        return result.toString();

    }
    boolean isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
}
