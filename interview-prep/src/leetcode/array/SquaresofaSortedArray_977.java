package leetcode.array;

public class SquaresofaSortedArray_977 {
    public int[] sortedSquares(int[] A) {
        if(A.length == 1) {
            A[0] = A[0] * A[0];
            return A;
        }
        int low = 0;
        int high = 1;
        for(int i = 0; i < A.length - 1; i++){
            low = i;
            high = i + 1;
            if(A[low] * A[high] < A[high]* A[high])break;
        }
        int[] out = new int[A.length];
        int i = 0;
        while(low >=0 && high < A.length){
            if(A[low] * A[low] <= A[high]*A[high]){
                out[i++] = A[low] * A[low];
                low--;
            }
            else{
                out[i++] = A[high] * A[high];
                high++;
            }
        }
        while(high < A.length){
            out[i++] = A[high] * A[high];
            high++;
        }
        while(low >=0){
            out[i++] = A[low] * A[low];
            low--;
        }
        return out;
    }
}
