package topic_wise.dp;

public class GridShortestTopLeftToBottomRightPath {
    public static void main(String[] args) {
        int grid[][] = {
                {5, 3, 2},
                {1, 7, -3}
        };
        System.out.println(gridShortestPath(grid));
    }

    private static int gridShortestPath(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int sp[][] = new int[m+1][n+1];
        sp[0][0] = grid[0][0];
        for(int i = 1; i < m; i++){
            sp[i][0] = sp[i-1][0] + grid[i][0];
        }
        for(int i = 1; i < n; i++){
            sp[0][i] = sp[0][i-1] + grid[0][i];
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                sp[i][j] = grid[i][j] + Math.min(sp[i-1][j], sp[i][j-1]);
            }
        }
        return sp[m-1][n-1];
    }
}
