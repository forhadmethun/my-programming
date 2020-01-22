package leetcode.array;

public class FibonacciNumber_509 {
    public int fib(int N) {
        int a = 0;
        int b = 1;
        if(N == 0) return a;
        if(N == 1) return b;
        int c = 0;
        for(int i = 2; i <= N; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
