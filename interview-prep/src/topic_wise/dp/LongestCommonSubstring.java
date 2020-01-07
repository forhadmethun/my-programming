package topic_wise.dp;

public class LongestCommonSubstring {
    public static void main(String[] args) {
        String s1 = "abcx";
        String s2 = "kpbc";
        int m = s1.length();
        int n = s2.length();

        System.out.println(longestCommonSubstringRec(s1, s2, m, n, 0));
        System.out.println(longestCommonSubstringIter(s1, s2, m, n));
    }

    private static int longestCommonSubstringIter(String s1, String s2, int m, int n) {
        int[][] L = new int[m+1][n+1];
        int res = Integer.MIN_VALUE;
        for(int i = 0; i <= m; i++){
            for(int j = 0; j <= n; j++){
                if(i == 0 || j == 0){
                    L[i][j] = 0;
                }
                else if(s1.charAt(i-1) == s2.charAt(j-1)){
                    L[i][j] = 1 + L[i-1][j-1];
                    res = Math.max(res, L[i][j]);
                }
                else{
                    L[i][j] = 0;
                }
            }
        }
        return res;
    }

    private static int longestCommonSubstringRec(String s1, String s2, int m, int n, int res) {
        if(m == 0 || n == 0) return res;
        else if(s1.charAt(m - 1) == s2.charAt(n - 1)){
            res = longestCommonSubstringRec(s1, s2, m - 1, n - 1, res + 1);
        }
        return Math.max(res, Math.max(longestCommonSubstringRec(s1, s2, m, n-1, 0),
                                      longestCommonSubstringRec(s1, s2, m - 1, n, 0)));
    }

}
