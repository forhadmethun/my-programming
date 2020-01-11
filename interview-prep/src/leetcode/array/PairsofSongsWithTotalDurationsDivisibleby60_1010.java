package leetcode.array;
import java.util.*;
public class PairsofSongsWithTotalDurationsDivisibleby60_1010 {
    public int numPairsDivisibleBy60(int[] time) {
        HashMap<Integer, Integer> set = new HashMap();
        int count = 0;
        for(int i = 0; i < time.length; i++){
            if(set.containsKey((60 - time[i]%60)%60)){
                count+=set.get((60 - time[i]%60)%60);
            }
            set.put(time[i]%60, set.getOrDefault(time[i]%60,0) + 1);
        }
        return count;
    }
}
