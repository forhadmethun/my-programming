package topic_wise.algorithm.dp.top_down;

public class Fibonacci {
    int[] memo = new int[100];
    int fibonacci(int n){
        if(memo[n] > 0) return memo[n];
        if( n == 1 || n == 2) return 1;
        else memo[n] =  fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
    }
}
