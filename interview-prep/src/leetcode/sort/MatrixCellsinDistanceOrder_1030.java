package leetcode.sort;
import java.util.*;

public class MatrixCellsinDistanceOrder_1030 {
    public int[][] allCellsDistOrder(int R, int C, int r0, int c0) {
        int[][] mat = new int[R][C];
        int[][] out = new int[R*C][2];
        Map<Integer, List<Integer[]> > map = new TreeMap<>();

        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++){
                int val = findManhattanDistance(r,c, r0,c0);
                if(map.get(val)!=null){
                    map.get(val).add(new Integer[]{r,c});
                }else{
                    map.put(val, new ArrayList<>());
                    map.get(val).add(new Integer[]{r,c});
                }
            }
        }

        int i = 0;
        for(List<Integer[]> list : map.values()){
            for(Integer[] l : list){
                out[i][0] = l[0];
                out[i][1] = l[1];
                i++;
            }
        }
        return out;
    }

    int findManhattanDistance(int r1, int c1, int r2, int c2){
        return Math.abs(r1 - r2) + Math.abs(c1 - c2);
    }


     static int[][] getAllCellDistOrderByBFS(int R, int C, int r0, int c0){
        int[][] result = new int[R*C][2];
        int i = 0;
        boolean[][] visited = new boolean[R][C];

        Queue<int[]> queue = new LinkedList<int[]>();
        queue.offer(new int[]{r0, c0});
        while(!queue.isEmpty()){
            int[] current = queue.poll();
            int r = current[0];
            int c = current[1];
            if(r <0 || r>=R || c <0 || c>=C ) continue;
            if(visited[r][c] == true) continue;

            //result[i][0] = r;
            //result[i][1] = c;
            System.out.println("r: " + r + ", c:" + c);
            result[i] = current;

            i++;
            visited[r][c] = true;


            queue.offer(new int[]{r, c-1});
            queue.offer(new int[]{r, c+1});
            queue.offer(new int[]{r-1, c});
            queue.offer(new int[]{r+1, c});
        }
        return result;

    }

    public static void main(String[] args) {
        getAllCellDistOrderByBFS(1,2,0,0);
    }
}
