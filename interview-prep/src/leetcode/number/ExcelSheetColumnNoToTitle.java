import java.util.*;
class Scratch {
    public static void main(String[] args) {
        System.out.println(new Solution().titleToNumber(703));
    }
}
class Solution {
    public String titleToNumber(int  n) {
        HashMap<Integer,Character> characterIntegerMap= new HashMap();
        for(int i = 0; i < 26; i ++){
            characterIntegerMap.put(i + 1, (char)('A' + i));
        }
        characterIntegerMap.put(0, 'Z');
        StringBuilder sb  = new StringBuilder();
        int sum = 0;
//        int len = s.length() - 1;
        while(n != 0){
            //sum += (int)Math.pow(26,i) * characterIntegerMap.get(s.charAt(len - i));
            sb.append(characterIntegerMap.get(n % 26));
            if(n%26 != 0)n = n / 26;
            else n = n / 26 - 1;
        }
        return sb.reverse().toString();
    }
}