package amazon.algorithms.graph;
import java.util.*;
public class DetectCycleInUndirectedGraph {
    static Vector<Vector<Integer>> adjList = new Vector();
    static Vector<Boolean> visited = new Vector();
    static boolean hasCycle(int u,int p){
        visited.set(u, true);
        for(int i=0;i<adjList.get(u).size();i++){
            int v = adjList.get(u).get(i);
            if(!visited.get(v)){
                if(hasCycle(v,u)){
                    return true;
                }
            }else if(v!=p) {
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int V, E;
        V= 3;
        E= 3;
        for(int i=0;i<V;i++){
            adjList.add(new Vector<Integer>());
            visited.add(false);
        }
        adjList.get(0).add(1);
        adjList.get(1).add(2);
        adjList.get(2).add(0);

        if(hasCycle(0,-1)){
            System.out.println("Cycle exists.");
        }else{
            System.out.println("No Cycle exists.");
        }
    }
}
