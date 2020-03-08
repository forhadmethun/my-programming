package topic_wise.algorithm.dp.recursion;

public class SubsetSum {
    boolean isSubsetSum(int[] arr, int n, int x){
        if(x == 0) return true;
        if(n == 0) return false;
        if(arr[n - 1] > x) isSubsetSum(arr, n -1, x);
        return isSubsetSum(arr, n -1, x) || isSubsetSum(arr, n -1 , x- arr[n-1]);
    }
}
