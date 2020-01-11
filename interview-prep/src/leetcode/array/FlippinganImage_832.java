package leetcode.array;

public class FlippinganImage_832 {
    public int[][] flipAndInvertImage(int[][] A) {
        for(int i = 0; i < A.length; i++){
            int rowLength = A[i].length;
            for(int j = 0; j < rowLength / 2; j++){
                int temp = A[i][j];
                A[i][j] = A[i][rowLength - 1 - j];
                A[i][rowLength - 1 - j] = temp;
            }
            for(int j = 0; j < rowLength; j++){
                if(A[i][j] == 1){
                    A[i][j] = 0;
                }else{
                    A[i][j] = 1;
                }
            }
        }
        return A;
    }
}
