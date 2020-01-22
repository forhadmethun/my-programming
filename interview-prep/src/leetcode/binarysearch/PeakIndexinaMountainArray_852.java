package leetcode.binarysearch;

public class PeakIndexinaMountainArray_852 {
    public int peakIndexInMountainArray(int[] A) {
        /*
        for(int i = 0; i < A.length -2; i ++){
            if(A[i] < A[i+1] && A[i+1] > A[i+2]){
                return i + 1;
            }
        }
        */
        int h = A.length - 1;
        int l = 0;
        while( l < h){
            int m = l + (h - l) / 2;
            if(A[m] < A[m+1]){
                l = m + 1;
            }
            else{
                h = m;
            }
        }
        return l;

    }
}
