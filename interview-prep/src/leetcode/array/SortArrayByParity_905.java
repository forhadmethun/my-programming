package leetcode.array;

public class SortArrayByParity_905 {
    public int[] sortArrayByParity(int[] A) {
        int evenPosition  = 0;
        int oddPosition = A.length - 1;
        while(evenPosition < oddPosition){
            if(A[evenPosition]%2 == 1 && A[oddPosition]%2 == 0){
                int temp = A[evenPosition];
                A[evenPosition] = A[oddPosition];
                A[oddPosition] = temp;
            }
            else if(A[evenPosition] %2 == 0){
                evenPosition++;
            }
            else if(A[oddPosition] %2 == 1){
                oddPosition--;
            }
        }
        return A;
    }
}
