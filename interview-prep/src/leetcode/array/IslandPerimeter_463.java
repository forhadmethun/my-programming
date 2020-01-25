package leetcode.array;

public class IslandPerimeter_463 {
    public int islandPerimeter(int[][] grid) {
        int perimeter = 0;
        for(int i = 0; i < grid.length; i++){

            for(int j = 0; j < grid[i].length; j++){
                int side = 4;
                if(grid[i][j] == 1){
                    //check up
                    if(i - 1 >=0){
                        side-=grid[i-1][j];
                    }
                    //check right
                    if(j + 1 < grid[i].length){
                        side-=grid[i][j+1];
                    }
                    //check bottom
                    if(i+1 < grid.length){
                        side-=grid[i+1][j];
                    }
                    //check left
                    if(j - 1 >=0){
                        side-=grid[i][j-1];
                    }
                    perimeter+=side;
                }
            }

        }
        return perimeter;
    }
}
