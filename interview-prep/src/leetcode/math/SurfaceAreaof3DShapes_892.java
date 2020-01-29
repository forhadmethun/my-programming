package leetcode.math;

public class SurfaceAreaof3DShapes_892 {
    public int surfaceArea(int[][] grid) {
        //help from discussion
        int res = 0;
        for(int i = 0 ; i < grid.length; i++){
            for(int j = 0; j < grid[i].length; j++){
                if(grid[i][j] > 0)res += grid[i][j] * 4 + 2;
                if( i > 0 ) res -=  Math.min(grid[i][j], grid[i-1][j]) *2 ;
                if(j  > 0 ) res -=  Math.min (grid[i][j], grid[i][j-1]) *2;
            }
        }
        return res;
    }
}
