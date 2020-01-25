package leetcode.array;

/**
 * todo 6 line solution possible!!
 */
public class ToeplitzMatrix_766 {
    public boolean isToeplitzMatrix(int[][] matrix) {

        // for(int i = 0; i < matrix.length + matrix[0].length - 1; i++){
        //diagonal of matrix
        int element = matrix[0][0];
        for(int j = 0; j < matrix.length && j < matrix[0].length; j++){
            if(matrix[j][j]!=element) return false;
        }

        //right side of diagonal
        for(int j = 0 + 1; j < matrix[0].length; j++){
            element = matrix[0][j];
            for(int k = 0; k + j < matrix[0].length && k < matrix.length; k++){
                if(matrix[k][j+k]!=element) return false;
            }
        }

        //left side of diagonal
        for(int j = 0 + 1; j < matrix.length; j++){
            element = matrix[j][0];
            for(int k = 0; k + j < matrix.length && k < matrix[0].length; k++){
                if(matrix[j+k][k] !=element)return false;
            }
        }

        //}
        return true;
    }
    /*

  [
      [1,2,3,4],
      [5,1,2,3],
      [9,5,1,2]
  ]

  [0][0], [1][1], [2][2]
  [0][1], [1][2], [2][3]
  [0][2], [1][3]
  [0][3]

  [1][0], [2][1]
  [2][0]

*/
}
