package leetcode.array;

public class SortArrayByParityII_922 {
    public static int[] sortArrayByParityII(int[] A) {
        int oddIndex = 1;
        int evenIndex = 0;
        while(true){
            if(oddIndex >= A.length || evenIndex >= A.length) break;
            while(evenIndex < A.length && A[evenIndex]%2 == 0){
                evenIndex+=2;
            }
            while(oddIndex < A.length && A[oddIndex]%2 !=0){
                oddIndex+=2;
            }
            if(oddIndex< A.length && evenIndex < A.length){
                int temp = A[evenIndex];
                A[evenIndex] = A[oddIndex];
                A[oddIndex] = temp;
                evenIndex+=2;
                oddIndex+=2;
            }

        }
        return A;
    }
    public static void main(String[] args) {
        int[] a = sortArrayByParityII(new int[]{7, 2});
        int x = 0;
    }
}




