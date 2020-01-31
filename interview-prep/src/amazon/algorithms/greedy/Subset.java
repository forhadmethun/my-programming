package amazon.algorithms.greedy;

import java.util.ArrayList;
import java.util.List;

public class Subset {
    public static void main(String[] args) {
        powerSet1("abc", "", -1);
        List<String> setList = powerSet2("abc", 2);
        System.out.println(setList);
        System.out.println("-- subset by bitwise operator ---");
        powerSet3("abc");
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
    static void powerSet3(String str){
        int n = str.length();
        System.out.println("-");
        for(int i = 0; i < (1 << n); i++){
            for(int j = 0; j < n; j++){
                if((i & (1 << j)) > 0){
                    System.out.print(str.charAt(j));
                }
            }
            System.out.println();
        }
    }
}
