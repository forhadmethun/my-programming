package topic_wise.algorithm.dp;

public class LIS {
    public static void main(String[] args) {
        int arr[] = {2, 5, 1};//, 3, 4, 8, 3, 6, 7};
        System.out.println(lis(arr));
    }

    private static int lis(int[] arr) {
        int L[] = new int[arr.length+1];
        L[1] = 1;
        for(int i = 2; i <= arr.length; i++){
            int maxSoFar = - 1;
            for(int j = 1; j <i; j++){
                if(arr[j-1] < arr[i-1]){
                    int localMax = 1 + L[j];
                    if(localMax > maxSoFar){
                        maxSoFar = localMax;
                    }
                }
            }
            L[i] = maxSoFar == -1 ? 1 : maxSoFar;
        }
        return L[arr.length];
    }
}
