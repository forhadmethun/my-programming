package leetcode.math;

public class ComplementofBase10Integer_1009 {
    public int bitwiseComplement(int N) {
        if(N == 0 )return 1;
        int ans = N;
        int b = 1;
        int temp = N;
        while(temp!=0){
            ans = ans ^ b;
            temp>>=1;
            b<<=1;
        }
        return ans;
    }
}
//8=  1000
//7=   111
//6=   110
