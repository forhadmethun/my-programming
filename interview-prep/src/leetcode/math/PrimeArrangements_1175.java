package leetcode.math;
import java.util.*;
public class PrimeArrangements_1175 {
    public int numPrimeArrangements(int n) {
        boolean[] primes = new boolean[n+1];
        Arrays.fill(primes,2, n+1,true);
        int cnt = 0;
        for(int i = 2; i * i <= n; i++){
            if(primes[i]){
                for(int j = i*i; j <=n; j+=i){
                    primes[j] = false;
                }
            }
        }
        for(boolean b: primes) cnt+= b ? 1 : 0;
        int mod = (int)1e9 + 7;
        long ret = 1;
        for(int i = 2; i <= cnt; i++) ret = (ret * i) % mod;
        for(int i = 2; i <= (n-cnt); i++) ret = (ret * i) % mod;
        return (int) ret;
    }
}
