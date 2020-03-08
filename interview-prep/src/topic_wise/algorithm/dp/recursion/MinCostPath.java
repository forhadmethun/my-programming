package topic_wise.algorithm.dp.recursion;

public class MinCostPath {
    int[][] cost = new int[10][];
    int calculateMinCost(int s, int d){
        if(s == d || s == d - 1) return cost[s][d];
        int minCost = cost[s][d];
        for(int i = s + 1; i < d; i++){
            minCost = Math.min(minCost, calculateMinCost(s,i) + calculateMinCost(i,d));
        }
        return minCost;
    }
}
