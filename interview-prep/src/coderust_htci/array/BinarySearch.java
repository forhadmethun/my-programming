//package coderust_htci.array;

class BinarySearch{
    boolean binarySearchIterative(int[] arr, int low, int high, int value){
        while(low <= high){
            int mid = low + (high - low) / 2; 
            if(arr[mid] == value){
                return true;
            }
            else if(value < arr[mid]){
                high = mid - 1; 
            }
            else if(value > arr[mid]){
                low = mid + 1; 
            }
        }
        return false;
    }
    boolean binarySearchRecursive(int[] arr, int low, int high, int value){
        if(low > high) return false;
        int mid = low + (high - low) / 2; 
        if(arr[mid] == value) return true;
        else if(value < arr[mid]){
            return binarySearchRecursive(arr, low, mid -1, value);
        }
        else if(value > arr[mid]){
            return binarySearchRecursive(arr, mid + 1, high, value);
        }
        return false;
    }
    public static void main(String[] args){
        BinarySearch bs = new BinarySearch();
        System.out.println(bs.binarySearchIterative(new int[]{1, 2, 6, 10, 23}, 0,4,16));
        System.out.println(bs.binarySearchRecursive(new int[]{1, 2, 6, 10, 23}, 0,4,10));
    }
}