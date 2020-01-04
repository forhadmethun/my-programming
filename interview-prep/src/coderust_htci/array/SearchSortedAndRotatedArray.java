package coderust_htci.array;

public class SearchSortedAndRotatedArray {
    boolean searchSortedAndRotatedArray(int arr[], int low, int high, int value){
        if(low > high) return false;
        int mid = low + (high - low) / 2;
        if(arr[mid] == value) return true;
        if(arr[mid] < arr[arr.length - 1]) {
            //second half sorted
            if(value > arr[mid] && value < arr[arr.length -1 ]){
                return searchSortedAndRotatedArray(arr, mid + 1, high, value);
            }else{
                return searchSortedAndRotatedArray(arr, low, mid - 1, value);
            }
        }
        else{
            //else first half must be sorted
            if(value > arr[low] && value < arr[mid]){
                return searchSortedAndRotatedArray(arr, low , mid - 1, value);
            }else{
                return searchSortedAndRotatedArray(arr, mid + 1, high, value);
            }
        }
    }
    public static void main(String[] args){
        SearchSortedAndRotatedArray bs = new SearchSortedAndRotatedArray();
        System.out.println(bs.searchSortedAndRotatedArray(new int[]{10, 16, 23, 1, 2, 6}, 0,5,16));
        System.out.println(bs.searchSortedAndRotatedArray(new int[]{1, 2, 6, 10, 23}, 0,4,10));
    }
}
