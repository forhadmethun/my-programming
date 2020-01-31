package topic_wise.algorithm;

import java.util.*;

public class GenerateAllSubstring {
    public static void main(String[] args) {
        powerSet1("abc", "", -1);
        List<String> setList = powerSet2("abc", 2);
        System.out.println(setList);
    }
    static void powerSet1(String str, String cur, int idx){
        System.out.println(cur);
        for(int i = idx + 1; i < str.length(); i++){
            powerSet1(str, cur + str.charAt(i), i);
        }
    }
    static List<String> powerSet2(String str, int idx){
        if(idx < 0 ){
            List<String> strList = new ArrayList<>();
            strList.add("");
            return strList;
        }
        List<String> subsetList = powerSet2(str, idx - 1);
        List<String> outputList = new ArrayList<>();
        outputList.addAll(subsetList);
        for(int i = 0; i < subsetList.size(); i++){
            outputList.add(subsetList.get(i) + str.charAt(idx));
        }
        return outputList;
    }
}
