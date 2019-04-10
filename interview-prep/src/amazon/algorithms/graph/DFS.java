package amazon.algorithms.graph;

import java.util.Vector;

public class DFS {
    static Vector<Vector<Integer>> adj = new Vector();
    static Vector<Boolean> visited = new Vector();

    static void dfs(int u){
        System.out.printf(" %d",u);
        visited.set(u,true);
        for(int i=0;i<adj.get(u).size();i++){
            int v = adj.get(u).get(i);
            if(!visited.get(v)){
                dfs(v);
            }
        }
    }


    public static void main(String[] args){
        int V = 4;
        for(int i=0;i<V;i++){
            adj.add(new Vector<Integer>());
            visited.add(false);
        }
        adj.get(0).add(1);
        adj.get(0).add(2);
        adj.get(1).add(2);
        adj.get(2).add(0);
        adj.get(2).add(3);
        adj.get(3).add(3);
        // graph link
        // https://cdncontribute.geeksforgeeks.org/wp-content/uploads/cycle.png

        dfs(2);


    }
}
