package leetcode.number;
import java.util.*;
public class BinaryPrefixDivisibleBy5_1018 {
    public List<Boolean> prefixesDivBy5(int[] A) {
        List<Boolean> out = new ArrayList<>();
        int res = 0;
        for(int a: A){
            res= (res * 2 + a) % 5;
            out.add(res == 0);
        }
        /*
        //not accepted !! how can be? the binary can be 30k long so need module arithmetic
        for(int i = 0; i < A.length; i++){
            StringBuilder sb = new StringBuilder();
            for(int j = 0; j <= i; j++){
                sb.append(A[j]);
            }
            if(Integer.parseInt(sb.toString(),2) % 5 == 0){
               out.add(true);
            }
            else{
                out.add(false);
            }
        }*/
        return out;
    }
}
