package topic_wise.algorithm.dp.recursion;

public class MinPathCostGrid {
    int minPathCost(int[][] cost, int m, int n){
        if( m == 0 && n == 0) return cost[0][0];
        if( m == 0) return minPathCost(cost, m, n - 1) +cost[0][n];
        if( n == 0) return minPathCost(cost, m - 1, n ) +cost[m][0];
        int x = minPathCost(cost, m - 1, n);
        int y = minPathCost(cost, m, n - 1);
        return Math.min(x, y) + cost[m][n];
    }
}
