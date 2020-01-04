package leetcode.array;

public class CellswithOddValuesinaMatrix_1252 {
    public int oddCells(int n, int m, int[][] indices) {
        int[][] output = new int[n][m];
        for(int i = 0; i < indices.length; i++){
            applyRowOperation(output, indices[i][0]);
            applyColumnOperation(output, indices[i][1]);
        }
        int count = 0;
        for(int i = 0; i < output.length; i++){
            for(int j =0; j < output[i].length;j++){
                if(output[i][j]%2==1){
                    count+=1;
                }
            }
        }
        return count;
    }
    void applyRowOperation(int[][] output, int row){
        for(int i = 0; i < output[0].length; i++){
            output[row][i] += 1;
        }
    }
    void applyColumnOperation(int[][] output, int column){
        for(int i = 0; i < output.length; i++){
            output[i][column] += 1;
        }
    }
}
