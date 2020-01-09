package leetcode.heap;

import java.util.*;

public class LastStoneWeight_1046 {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(20, Collections.reverseOrder());
        for(int stone: stones){
            pq.add(stone);
        }
        int ans = 0;
        while(true){
            if(pq.size() == 0 ){
                break;
            }
            else if(pq.size() == 1){
                ans = pq.poll();
                break;
            }

            int topMax = pq.poll();
            int secondTopMax = pq.poll();
            if(topMax != secondTopMax){
                pq.add(topMax - secondTopMax);
            }
        }
        return ans;
    }
}
