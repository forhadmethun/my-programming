package amazon.algorithms.dp;

public class EditDistance {
    static int min(int x,int y,int z){
        return Math.min(x,Math.min(y,z));
    }
    static int editDistance(String str1,String str2, int m,int n){
        if(m==0)return n;
        if(n==0)return m;
        if(str1.charAt(m-1) == str2.charAt(n-1))return editDistance(str1,str2,m-1,n-1);
        return 1 + min(
                editDistance(str1,str2,m-1,n),
                editDistance(str1,str2,m,n-1),
                editDistance(str1,str2,m-1,n-1)
        );
    }

    static int editDistanceDP(String str1,String str2){
        int m = str1.length();
        int n = str2.length();

        int dp[][] = new int[m+1][n+1];

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    dp[i][j] = j;
                }
                else if(j==0){
                    dp[i][j] = i;
                }
                else if(str1.charAt(i-1)==str2.charAt(j-1)){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min(
                            dp[i-1][j]
                            ,dp[i][j-1]
                            ,dp[i-1][j-1]
                    );
                }

            }
        }
        return dp[m][n];

    }
    public static void main(String[] args){
        String str1 = "abc";
        String str2 = "bd";

        System.out.println(editDistance(str1,str2,str1.length(),str2.length()));
        System.out.println(editDistanceDP(str1,str2));
    }
}
