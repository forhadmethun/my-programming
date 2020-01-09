package leetcode.array;

public class DuplicateZeros_1089 {
    public void duplicateZeros(int[] arr) {
        int index = 0;
        while(index < arr.length){
            if(arr[index] == 0){
                index++;
                shiftOnce(arr, index);
            }
            index++;
        }
    }
    void shiftOnce(int[] arr, int start){
        for(int i = arr.length - 1; i >= start; i--){
            arr[i] = arr[i-1];
        }
    }
}
