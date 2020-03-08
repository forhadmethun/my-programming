package topic_wise.algorithm.dp.recursion;

public class Combination {
    int comb(int n, int m){
        if( n == m || m == 0 || n == 0) return 1;
        return comb(n - 1, m - 1) + comb(n -1, m);
    }
}
