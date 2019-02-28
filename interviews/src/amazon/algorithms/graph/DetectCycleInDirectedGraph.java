package amazon.algorithms.graph;

import java.io.File;
import java.nio.file.Paths;
import java.util.Scanner;
import java.util.Vector;

public class DetectCycleInDirectedGraph {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File(Paths.get("").toAbsolutePath().toString() + "/src/amazon/in/detectcycle.txt"));
        while (sc.hasNext()) {
            Vector<Vector<IntegerPair>> adjList = new Vector<>();
            Vector<Boolean> visited = new Vector<>();
            Vector<Boolean> recursionStack = new Vector<>();

            int V, E;
            V = sc.nextInt();
            E = sc.nextInt();
            for (int i = 0; i < V; i++) {
                adjList.add(new Vector<>());
                visited.add(false);
                recursionStack.add(false);
            }
            for (int i = 0; i < E; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                int w = sc.nextInt();
                adjList.get(u).add(new IntegerPair(v, w));
            }
            System.out.println("============ START ============");
            if(hasCycle(0, adjList, visited, recursionStack)){
                System.out.println("has cycle");
            }
            else{
                System.out.println("no cycle");
            }
            System.out.println("============ END ============");
        }

//        adjList.stream().forEach(i ->{
//            i.forEach(x->{
//                System.out.println(x.v);
//            });
//        });


    }

    static boolean hasCycle(int u, Vector<Vector<IntegerPair>> adjList,
                            Vector<Boolean> visited,
                            Vector<Boolean> recursionStack
    ) {
        if (recursionStack.get(u)) return true;
        if (visited.get(u)) return false;
        visited.set(u, true);
        recursionStack.set(u, true);
        Vector<IntegerPair> list = adjList.get(u);
        for (int i = 0; i < list.size(); i++) {
            IntegerPair currentNode = list.get(i);
            int v = currentNode.v;
            int w = currentNode.w;
            if (hasCycle(v, adjList, visited, recursionStack)) {
                return true;
            }
        }
        recursionStack.set(u, false);
        return false;
    }

    static class IntegerPair {
        int v;
        int w;

        IntegerPair(int v, int w) {
            this.v = v;
            this.w = w;
        }
    }
}
