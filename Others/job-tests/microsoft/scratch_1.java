import java.util.HashMap;
import java.util.Map;

class Solution {
    public static int solution(int[] A) {
        // write your code in Java SE 8
        Map<Integer, Boolean> map = new HashMap<>();
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < A.length; i++){
            map.put(A[i], true);
            if(A[i] > max){
                max = A[i];
            }
            if(A[i] < min){
                min = A[i];
            }
        }
        if(max <= 0) return 1;
        int startIndex = min - 1;
        if(startIndex <= 0){
            startIndex = 1;
        }
        for(int i = startIndex ; i <= max + 1; i++){
            if(!map.containsKey(Integer.valueOf(i))){
                return i;
            }
        }
        return 1;

    }

    public static void main(String[] args) {
        int[] A = {-1,1};
        System.out.println(solution(A));
    }
}
