package amazon.algorithms.dp;

public class ZeroOneKnapsack {
    static int knapsack(int w, int n, int val[], int wt[]){
        int mat[][] = new int[n+1][w+1];
        for(int i=0;i<=n;i++) {
            for (int j = 0; j <= w; j++) {
                if (i == 0 || j == 0) mat[i][j] = 0;
                else if (wt[i] > w){
                    mat[i][j] = mat[i - 1][j];
                }
                else {
                    mat[i][j] = Math.max(mat[i - 1][j], val[i] + mat[i - 1][w - wt[i]]);
                }
            }
        }
        return mat[n][w];
    }
    public static void main(String[] args){
        int val[] = {-1,100, 20, 60,40};
        int wt[] = {-1, 3, 2, 4, 1};

        int n = 4;
        int w = 5;

        int knapsack = knapsack(w,n,val,wt);

        System.out.println(knapsack);


    }
    
}