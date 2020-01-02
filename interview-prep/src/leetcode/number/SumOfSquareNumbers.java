package leetcode.number;
import java.util.*;

class SumOfSquareNumbers {
    public boolean judgeSquareSum(int c) {
        /*
        int limit = (int) Math.ceil(Math.sqrt(c));
        for(int i = 0; i <= limit; i++){
            for(int j = i; j <= limit; j++){

                if(i * i + j * j == c){
                    return true;
                }
                if(i * i + j * j > c)break;
            }
        }
        return false;
        */
        Map<Integer, Integer> squareToNumberMap = new HashMap<>();
        int limit = (int) Math.ceil(Math.sqrt(c));
        for(int i = 0; i <= limit; i++){
            squareToNumberMap.put(i*i, i*i);
        }
        for(int i = 0; i <= limit; i++){
            if(squareToNumberMap.containsKey(c - squareToNumberMap.get(i*i)))return true;
        }
        return false;

    }
}