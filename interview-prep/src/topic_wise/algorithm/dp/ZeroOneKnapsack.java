package topic_wise.algorithm.dp;

public class ZeroOneKnapsack {

    public static void main(String[] args) {
        int wt[] = {1, 3, 4, 5};
        int v[] = {1, 4, 5, 7};
        int W = 7;
        int n = wt.length;
        System.out.println(zeroOneKnapsackRec(wt, v, W, n));
        System.out.println(zeroOneKnapsackDP(wt, v, W, n));

    }

    private static int zeroOneKnapsackDP(int[] wt, int[] v, int w, int n) {
        int[][] T = new int[n+1][w+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= w; j++){
                if( i == 0 || j == 0) {
                    T[i][j]= 0;
                }
                else if(wt[i-1] <= j){
                    T[i][j] = Math.max(v[i-1] + T[i-1][j-wt[i-1]], T[i-1][j]);
                }
                else {
                    T[i][j] = T[i-1][j];
                }
            }
        }
        return T[n][w];
    }

    private static int zeroOneKnapsackRec(int[] wt, int[] v, int w, int n) {
        if(n == 0 || w == 0 ) return 0;
        if(wt[n-1] > w) return zeroOneKnapsackRec(wt, v, w, n - 1);
        return Math.max(
          v[n-1] + zeroOneKnapsackRec(wt, v, w - wt[n-1], n - 1),
          zeroOneKnapsackRec(wt, v, w, n - 1)
        );
    }

}
