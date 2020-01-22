package topic_wise.algorithm.sorting;

public class CountingSort {
    static void sort(int[] arr){
        int max = findMax(arr);
        int[] countArray = new int[max+1];
        for(int a : arr){
            countArray[a]++;
        }
        int idx = 0;
        for(int i = 0; i < countArray.length; i++){
            if(countArray[i] >0){
                while (countArray[i] > 0){
                    arr[idx++] = i ;//countArray[i];
                    countArray[i]-=1;
                }
            }
        }
    }
    static int findMax(int arr[]){
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < arr.length; i++){
            max = Math.max(max, arr[i]);
        }
        return max;
    }
}
