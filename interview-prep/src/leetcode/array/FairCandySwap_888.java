package leetcode.array;
import java.util.*;
public class FairCandySwap_888 {
    public int[] fairCandySwap(int[] A, int[] B) {
        int sumA = 0;
        int sumB = 0;
        Set<Integer> set = new HashSet<>();
        for(int a : A){
            sumA +=a;
            set.add(a);
        }
        for(int b : B){
            sumB +=b;
        }
        int dis = (sumA - sumB) / 2;
        for(int b : B){
            if(set.contains(b + dis)){//   a - b == dis){
                return new int[]{b + dis, b};
            }

        }
        return new int[0];

    }
}
