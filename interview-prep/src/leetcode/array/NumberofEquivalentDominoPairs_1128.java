package leetcode.array;
import java.util.*;

public class NumberofEquivalentDominoPairs_1128 {
    public int numEquivDominoPairs(int[][] dominoes) {
        int dominoesCount = 0;
        /*
        //TLE
        for(int i = 0 ; i < dominoes.length; i++){
            int a = dominoes[i][0];
            int b = dominoes[i][1];
            for(int j = i + 1; j < dominoes.length; j++){
                int c = dominoes[j][0];
                int d = dominoes[j][1];
                if((a==c && b==d) || (a==d && b==c)) dominoesCount++;
            }
        }
        */
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < dominoes.length; i++){
            int n = Math.min(dominoes[i][0], dominoes[i][1])* 10 + Math.max(dominoes[i][0], dominoes[i][1]);
            map.put(n, map.getOrDefault(n,0)+1);
        }
        for(int v: map.values()){
            dominoesCount += (v * (v-1))/2;
        }

        return dominoesCount;
    }
}
