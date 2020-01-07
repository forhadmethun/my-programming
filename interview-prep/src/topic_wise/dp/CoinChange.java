package topic_wise.dp;

public class CoinChange {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3};
        int m = arr.length;
        int n = 4;
        System.out.println(ccRec(arr,m,n));
        System.out.println(ccIter(arr,m,n));
    }

    private static int ccIter(int[] S, int m, int n) {
        int T[][] = new int[m+1][n+1];
        for(int i = 0; i <= m; i++){
            T[i][0] = 1;
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(S[i-1] > j){
                    T[i][j] = T[i-1][j];
                }
                else{
                    T[i][j] = T[i-1][j] + T[i][j - S[i-1]];
                }
            }
        }
        return T[m][n];
    }

    private static int  ccRec(int[] arr, int m, int n) {
        if( n == 0 ) return 1;
        if( n < 0) return 0;
        if( m <= 0 && n>=1) return 0;
        return ccRec(arr, m - 1, n) +
               ccRec(arr, m, n - arr[m - 1]);
    }
}
