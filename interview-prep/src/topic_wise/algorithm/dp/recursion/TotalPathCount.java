package topic_wise.algorithm.dp.recursion;

public class TotalPathCount {
    int totalPathCount(int[][] cost, int m, int n){
        if( m == 0 && n == 0) return 1;
        if( m == 0 || m == 1) return 0;
        return totalPathCount(cost, m - 1, n) + totalPathCount(cost, m, n - 1);
    }
}
