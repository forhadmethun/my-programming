package amazon.algorithms.dp;

import java.util.Arrays;
public class LIS {
    static int lis(int arr[]){
        int n = arr.length;
        int T[] = new int[n];
        Arrays.fill(T,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j])T[i] = Math.max(T[i],1+T[j]);
            }
        }
        return T[n-1];
    }
    public static void main(String args[]){
        int arr[] = {10, 22, 9, 33, 21, 50, 41, 60 };
        int lis = lis(arr);
        System.out.println(lis);

    }
}
