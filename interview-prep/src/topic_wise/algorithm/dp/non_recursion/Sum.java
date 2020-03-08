package topic_wise.algorithm.dp.non_recursion;

class Sum {
    int sum(int n){
        int sum = 0;
        for(int i = 0; i <= n; i++){
            sum +=i;
        }
        return sum; 
    }
}