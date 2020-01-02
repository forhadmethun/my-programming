package leetcode.number;
import java.util.*;

class ExcelSheetColumnTitleToColNum {
    public int titleToNumber(String s) {
        HashMap<Character,Integer> characterIntegerMap= new HashMap();
        for(int i = 0; i < 26; i ++){
            characterIntegerMap.put((char)('A' + i), i + 1);
        }
        int sum = 0;
        int len = s.length() - 1;
        for(int i = 0; i < s.length(); i++){
            sum += (int)Math.pow(26,i) * characterIntegerMap.get(s.charAt(len - i));
        }
        return sum;
    }
}