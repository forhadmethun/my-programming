package topic_wise.algorithm.dp.non_recursion;

public class Fibonacci {
    int fibonacci(int n){
        if(n == 1 | n == 2) return 1;
        int a = 1, b = 1, c = 2;
        for(int i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    int fibonacci2(int n){
        int[] arr = new int[100];
        arr[1] = 1;
        arr[2] = 1;
        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
}
