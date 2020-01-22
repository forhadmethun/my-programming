package leetcode.dp;

public class DivisorGame_1025
{
    public boolean divisorGame(int N) {
        //return N % 2 == 0;
        boolean[] dp = new boolean[N+1];
        for(int i = 2; i <= N; i++){
            for(int j = 1; j < i; j++){
                if(i %j == 0 && !dp[i-j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[N];
    }
}
