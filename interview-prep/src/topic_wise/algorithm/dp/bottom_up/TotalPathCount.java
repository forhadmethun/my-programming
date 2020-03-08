package topic_wise.algorithm.dp.bottom_up;

public class TotalPathCount {
    int totalPathCount(int[][] cost, int m, int n){
       int[][] memo = new int[m][n];
       for(int i = 0; i < m; i++){
           memo[i][0] = 1;
       }
       for(int j =0; j < n; j++){
           memo[0][j] = 1;
       }
       for(int i = 1; i < m; i++){
           for(int j = 1; j <m; j++){
                memo[i][j] = memo[i][j-1] + memo[i-1][j];
           }
       }
       return memo[m-1][n-1];
    }
}
