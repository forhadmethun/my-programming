package leetcode.math;

public class ProjectionAreaof3DShapes_883 {
    public int projectionArea(int[][] grid) {
        return getArea(grid, "xy") + getArea(grid, "yz") + getArea(grid, "zx");
    }
    int getArea(int[][] grid, String plane){
        int area = 0;
        for(int i = 0; i < grid.length; i++){
            int maxArea = 0;
            for(int j = 0; j < grid[i].length; j++){
                if(plane.equals("xy")){
                    maxArea = Math.max(maxArea, grid[j][i]);
                }
                else if(plane.equals("yz")){
                    maxArea = Math.max(maxArea, grid[i][j]);
                }
                else{
                    if(grid[i][j] > 0){
                        maxArea += 1;
                    }
                }
            }
            area+= maxArea;
        }
        return area;
    }
}
