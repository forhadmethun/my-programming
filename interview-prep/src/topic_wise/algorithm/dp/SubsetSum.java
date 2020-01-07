package topic_wise.algorithm.dp;

public class SubsetSum {
    public static void main(String[] args) {
        int[] set = {3, 34, 4, 12, 5, 2};
        int sum = 9;
        int n = set.length;
        System.out.println(isSubsetSumRec(set,sum,n));
        System.out.println(isSubsetSumDP(set,sum,n));
    }

    private static boolean isSubsetSumDP(int[] set, int sum, int n) {
        boolean[][] dp = new boolean[n+1][sum+1];
        //while the sum is zero then it's always true for empty subset
        for(int i = 0; i < n;i++){
            dp[i][0] = true;
        }
        //while the set is empty then always false for all sum
        for(int i = 0; i < sum; i++){
            dp[0][sum] = false;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= sum; j++){
                if(set[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                }
                else if(set[i-1] <= j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j - set[i-1]];
                }
            }
        }
        return dp[n][sum];
    }

    private static boolean isSubsetSumRec(int[] set, int sum, int n) {
        if(sum == 0 ) return true;
        if(sum != 0 && n == 0){
            return false;
        }
        if(set[n-1] > sum){
            return isSubsetSumRec(set, sum, n - 1);
        }
        else return isSubsetSumRec(set, sum - set[n-1], n-1) || isSubsetSumRec(set, sum, n-1);
    }
}
