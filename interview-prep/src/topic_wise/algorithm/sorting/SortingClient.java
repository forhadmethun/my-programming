package topic_wise.algorithm.sorting;

public class SortingClient {
    public static void main(String[] args) {
        bubbleSortCheck();
        countingSortCheck();
        quickSortCheck();
        mergeSortCheck();
    }
    static void bubbleSortCheck(){
        System.out.println("----------- start: bubble sort------------------");
        int arr[] = {3, 2, 1, 8, 7, 5, 4};
        BubbleSort.sort(arr);
        for(int a : arr){
            System.out.printf("%d ",a);
        }
        System.out.println();
        System.out.println("----------- end: bubble sort------------------");
    }
    static void countingSortCheck(){
        System.out.println("----------- start: counting sort------------------");
        int arr[] = {3, 2, 1, 8, 7, 5, 4};
        CountingSort.sort(arr);
        for(int a : arr){
            System.out.printf("%d ",a);
        }
        System.out.println();
        System.out.println("----------- end: counting sort------------------");
    }
    static void quickSortCheck(){
        System.out.println("----------- start: Quick sort------------------");
        int arr[] = {3, 2, 1, 8, 7, 5, 4};
        QuickSort.sort(arr);
        for(int a : arr){
            System.out.printf("%d ",a);
        }
        System.out.println();
        System.out.println("----------- end: Quick sort------------------");
    }
    static void mergeSortCheck(){
        System.out.println("----------- start: Merge sort------------------");
        int arr[] = {3, 2, 1, 8, 7, 5, 4};
        MergeSort.sort(arr);
        for(int a : arr){
            System.out.printf("%d ",a);
        }
        System.out.println();
        System.out.println("----------- end: Merge sort------------------");
    }
}
