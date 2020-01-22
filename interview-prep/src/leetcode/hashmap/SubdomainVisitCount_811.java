package leetcode.hashmap;
import java.util.*;

public class SubdomainVisitCount_811 {
    public static List<String> subdomainVisits(String[] cpdomains) {
        List<String> outputList= new ArrayList<>();
        Map<String, Integer> map = new LinkedHashMap<>();
        for(String cpdomain : cpdomains){
            String[] splittedCpDomain = cpdomain.split(" ");
            String count = splittedCpDomain[0];
            String domain = splittedCpDomain[1];

            String[] domainList = domain.split("\\.");
            int domainListLenght = domainList.length;
            for(int i = 0; i < domainListLenght; i++){
                StringBuilder sb = new StringBuilder();
                for(int j = i; j >= 0; j--){
                    sb.append(domainList[domainListLenght - 1 -j]);
                    if(j!= 0)sb.append(".");
                }
                map.put(sb.toString(),Integer.valueOf(count) + map.getOrDefault(sb.toString(),0));
            }
        }
        for(Map.Entry<String, Integer> entry : map.entrySet()){
            String e = entry.getValue() + " " + entry.getKey();
            outputList.add(e);
        }
        return outputList;
    }

    public static void main(String[] args) {
        subdomainVisits(new String[]{"9001 discuss.leetcode.com"});
    }
}
