package leetcode.array;
import java.util.*;

public class CompareStringsbyFrequencyoftheSmallestCharacter_1170 {
    public int[] numSmallerByFrequency(String[] queries, String[] words) {
        List<Integer> output = new ArrayList<>();
        for(int i = 0; i < queries.length; i++){
            int cnt = 0;
            for(int j = 0; j < words.length; j++){
                if(countf(queries[i]) < countf(words[j]) ) cnt++;
            }
            //if(cnt >0){
            output.add(cnt);
            //}
        }
        return output.stream().mapToInt(i -> i).toArray();
    }
    int countf(String query){
        char c = 'z' + 1;
        for(int i = 0; i < query.length(); i++){
            if(query.charAt(i) < c){
                c = query.charAt(i);
            }
        }
        int cnt= 0;
        for(int i = 0; i < query.length(); i++){
            if(query.charAt(i) == c){
                cnt++;
            }
        }
        return cnt;
    }
}
