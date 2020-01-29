package leetcode.array;

public class MonotonicArray_896 {
    public boolean isMonotonic(int[] A) {
        /*
        boolean f = true, s = true;
        for(int i = 0; i < A.length; i++){
            for(int j = i; j < A.length; j++){
                if(!(A[i] <= A[j])){
                    f = false;
                }
                if(!(A[i] >= A[j])){
                    s = false;
                }
            }
        }
        return f || s;
        */
        int i = 0;
        if(A.length == 1) return true;
        while(i + 1 < A.length){
            if(A[i] == A[i+1]) {
                i++;
                continue;
            }
            break;

        }

        if(i + 1 < A.length){
            if(A[i+1] > A[i]){
                while( i + 1 < A.length){
                    if(A[i+1] < A[i]) return false;
                    i++;
                }
            }else{
                while( i + 1 < A.length){
                    if(A[i+1] > A[i]) return false;
                    i++;
                }
            }
        }
        return true;


    }
}
