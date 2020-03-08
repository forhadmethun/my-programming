package topic_wise.algorithm.dp.bottom_up;

public class MinCostPath {
   int[] minCost = new int[10];
   int N = 5;
    int calculateMinCost(int[] cost[]){
        minCost[0] = 0;
        minCost[1] = cost[0][1];
        for(int i = 2; i < N; i++){
            minCost[i] = cost[0][i];
            for(int j = 1; j < i; j++){
                minCost[i] = Math.min(minCost[i], minCost[j] + cost[i][j]);
            }
        }
        return minCost[N - 1];
    }
}
