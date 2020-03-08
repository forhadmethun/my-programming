package topic_wise.algorithm.dp.bottom_up;

public class SubsetSum {
    boolean isSubsetSum(int[] arr, int n, int x){
       boolean[][] subset = new boolean[n+1][x+1];
       for(int i = 0; i <=n; i++){
           subset[i][0] = true;
       }
       for(int j =1; j <= x; j++){
           subset[0][j] = false;
       }
       for(int i = 1; i <= n; i ++){
           for(int j = 1; j <= x; j++){
               if(arr[i-1] > j){
                   subset[i][j] = subset[i-1][j];
               }else{
                   subset[i][j] = subset[i-1][j] || subset[i-1][j - arr[i-1]];
               }
           }
       }
       return subset[n][x];
    }
}
