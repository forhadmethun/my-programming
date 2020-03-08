package topic_wise.algorithm.dp.recursion;

class Sum {
    int sum(int n){
        if(n == 0) return 0; 
        if(n ==1) return 1;
        else return 1 + sum(n-1); 
    }
}