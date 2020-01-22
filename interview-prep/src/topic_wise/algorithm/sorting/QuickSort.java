package topic_wise.algorithm.sorting;

public class QuickSort {
    static void sort(int arr[]){
        sort(arr, 0, arr.length - 1);
    }
    static void sort(int arr[], int l, int r){
        if(l < r){
            int p = getPartitionIndex(arr, l, r);
            sort(arr, l, p - 1);
            sort(arr, p + 1, r);
        }
    }
    static int getPartitionIndex(int arr[], int l, int r){
        int pivot = arr[r];
        int pivotIndex = l;
        for(int i = l; i < r; i++){
            if(arr[i] <= pivot){
                int temp = arr[i];
                arr[i] = arr[pivotIndex];
                arr[pivotIndex] = arr[i];
                pivotIndex++;
            }
        }
        int temp = arr[r];
        arr[r] = arr[pivotIndex];
        arr[pivotIndex] = temp;
        return pivotIndex;
    }
}
