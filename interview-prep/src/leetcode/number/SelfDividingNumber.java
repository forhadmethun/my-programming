package leetcode.number;
import java.util.*;

class SelfDividingNumber {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> selfDividingNumberList = new ArrayList<>();
        for(int i = left; i <= right; i++){
            if(checkIfSelfDividing(i)){
                selfDividingNumberList.add(i);
            }
        }
        return selfDividingNumberList;
    }
    boolean checkIfSelfDividing(int n){
        int m = n; 
        while(m != 0){
            int mod = m % 10;
            if(mod == 0)return false; 
            if(n % mod !=0)return false;
            m = m / 10; 
        }
        return true;
    }
}