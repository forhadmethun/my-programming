package topic_wise.algorithm.dp.recursion;

public class WaysToScore {
    int waysToScore(int n){
        if(n < 0) return 0;
        if(n == 0) return 1;
        return waysToScore(n - 10) + waysToScore(n - 5) + waysToScore(n - 3);
    }
}
