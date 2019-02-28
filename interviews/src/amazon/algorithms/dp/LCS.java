package amazon.algorithms.dp;

public class LCS {
    static void lcs(String x, String y){
        int m = x.length();
        int n = y.length();
        int L[][] = new int[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    L[i][j] = 0;
                }
                else if(x.charAt(i-1)==y.charAt(j-1)){
                    L[i][j] = 1 + L[i-1][j-1];
                }
                else{
                    L[i][j] = Math.max(L[i-1][j],L[i][j-1]);
                }
            }
        }

        System.out.println(L[m][n]);
    }

    public static void main(String [] args){
        String x="AGGTAB", y ="GXTXAYB";
        lcs(x,y);
    }
}
