package leetcode.hashmap;
import java.util.*;
public class DistributeCandies_575 {
    public int distributeCandies(int[] candies) {
        Map<Integer, Integer> map = new HashMap<>();
        int count = candies.length;
        for(int candy : candies){
            map.put(candy, map.getOrDefault(candy, 0) + 1);
        }
        count /= 2;
        return (map.size() >= count) ? count : map.size();
    }
}
