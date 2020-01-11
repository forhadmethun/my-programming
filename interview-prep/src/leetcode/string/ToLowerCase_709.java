package leetcode.string;

public class ToLowerCase_709 {
    public String toLowerCase(String str) {
        //return str.toLowerCase();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < str.length(); i++){
            if(str.charAt(i)>= 'A' && str.charAt(i) <= 'Z'){
                //System.out.println((int)str.charAt(i) - (int)'A');
                sb.append((char) (  ((int)str.charAt(i) - (int)'A') + (int)'a'));
            }
            else{
                sb.append(str.charAt(i));
            }
        }
        return sb.toString();
    }
}
