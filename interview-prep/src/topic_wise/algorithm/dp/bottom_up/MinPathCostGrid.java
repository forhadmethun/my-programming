package topic_wise.algorithm.dp.bottom_up;

public class MinPathCostGrid {
    int mem[][] = new int[100][100];
    int M = 10;
    int N = 10;
    int minPathCost(int[][] cost, int m, int n){
        mem[0][0] = cost[0][0];

        for(int i = 1; i < M; i++){
            mem[i][0] = mem[i-1][0] + cost[i][0];
        }
        for(int j = 1;j < N; j++){
            mem[0][j] = mem[0][j-1] + cost[0][j];
        }
        for(int i = 1; i < M; i++){
            for(int j = 1; j < N; j++){
                mem[i][j] = Math.min(mem[i-1][j], mem[i][j-1]) + cost[i][j];
            }
        }
        return mem[m][n];
    }
}
