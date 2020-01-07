package topic_wise.algorithm.dp;

public class LongestCommonSubsequence {
    public static void main(String[] args) {
        String A = "AGGTAB";
        String B = "GXTXAYB";
        int m = A.length();
        int n = B.length();
        System.out.println(longestCommonSubsequenceRec(A, B, m, n));
        System.out.println(longestCommonSubsequenceDP(A, B, m, n));
    }

    private static int longestCommonSubsequenceDP(String a, String b, int m, int n) {
        int[][] L = new int[m+1][n+1];
        for(int i = 0; i <= m; i++){
            for(int j = 0; j <= n;j++){
                if(i == 0 || j == 0){
                    L[i][j] = 0;
                }
                else if( a.charAt(i-1) == b.charAt(j-1)){
                    L[i][j] = 1 + L[i-1][j-1];
                }
                else{
                    L[i][j] = Math.max(L[i-1][j], L[i][j-1]);
                }
            }
        }
        return L[m][n];
    }

    private static int longestCommonSubsequenceRec(String a, String b, int m, int n) {
        if(m == 0 || n == 0 ) return 0;
        if(a.charAt(m-1) == b.charAt(n-1)){
            return 1 + longestCommonSubsequenceRec(a,b,m-1,n-1);
        }else{
            return Math.max(longestCommonSubsequenceRec(a,b,m,n-1), longestCommonSubsequenceRec(a,b,m-1,n));
        }
    }
}
