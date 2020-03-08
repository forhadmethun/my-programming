package topic_wise.algorithm.dp.recursion;

public class CutRod {
    int[] values;
    int  cutRod(int arr[], int n){
        if(n <= 0)return 0;
        int maxValue = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++){
            maxValue = Math.max(maxValue, values[i] + cutRod(arr, n - 1));
        }
        return maxValue;
    }
}
