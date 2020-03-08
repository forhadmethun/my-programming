package topic_wise.algorithm.dp.top_down;

public class MinPathCostGrid {
    int mem[][] = new int[100][100];
    int minPathCost(int[][] cost, int m, int n){
        if(mem[m][n] > 0 ) return mem[m][n];
        if( m == 0 && n == 0) {
            mem[m][n] = cost[0][0];
            return cost[0][0];
        }
        if( m == 0) {
            mem[m][n] =  minPathCost(cost, m, n - 1) +cost[0][n];
        }
        else if( n == 0) mem[m][n] =  minPathCost(cost, m - 1, n ) +cost[m][0];
        else{
            int x = minPathCost(cost, m - 1, n);
            int y = minPathCost(cost, m, n - 1);
            mem[m][n] = Math.min(x, y) + cost[m][n];
        }
        return mem[m][n];
    }
}
