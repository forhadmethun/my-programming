package topic_wise.algorithm.dp.recursion;

class BubbleSort{
    void bubbleSort(int[] arr, int n){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j + 1);
            }
        }
        bubbleSort(arr, n - 1);
        
    }
    void swap(int[] arr, int i, int j ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
    }
}