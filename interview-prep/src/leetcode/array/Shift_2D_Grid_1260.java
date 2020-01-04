package leetcode.array;
import java.util.*;
public class Shift_2D_Grid_1260 {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        int row = grid.length;
        int column = grid[0].length;
        for(int i = 0; i < k; i++){
            shiftOnce(grid, row, column);

        }
        List<List<Integer>> output = new ArrayList<>();
        for(int i = 0; i< row; i++){
            List<Integer> rowList = new ArrayList<>();
            for(int j = 0; j < column; j++){
                rowList.add(grid[i][j]);
            }
            output.add(rowList);
        }
        return output;

    }

    int[] get2dIndexFromPosition(int column, int position){
        int row = position / column;
        int col = position % column;

        return new int[]{row, col};
    }

    void shiftOnce(int[][] grid, int row, int column){
        int temp = grid[row - 1][column -1];
        for(int i = row * column - 1; i >= 1; i--){
            int[] currentPosition = get2dIndexFromPosition(column, i);
            int[] previousPosition = get2dIndexFromPosition(column, i-1);
            grid[currentPosition[0]][currentPosition[1]] = grid[previousPosition[0]][previousPosition[1]];
        }
        grid[0][0] = temp;
    }
}
