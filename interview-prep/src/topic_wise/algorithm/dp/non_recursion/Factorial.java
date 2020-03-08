package topic_wise.algorithm.dp.non_recursion;

public class Factorial {
    int factorial(int n){
        int factorial = 1;
        for(int i = 2; i <= n; i++){
            factorial = factorial * i;
        }
        return factorial;
    }
}
