package amazon.algorithms.graph;

import java.util.*;
import java.io.*;
import java.nio.file.Paths;
public class MST {
    static class IntegerPair {
        int first,second;
        IntegerPair(int x, int y){first = x;second = y;}
    }
    static Vector<Vector<IntegerPair>> adjList  = new Vector();
    static PriorityQueue<IntegerPair> pq =
            new PriorityQueue<IntegerPair>((x,y)-> x.first - y.first);
    static Vector<Boolean> taken = new Vector();

    static void process(int vtx){
        taken.set(vtx,true);
        for(int i=0;i< adjList.get(vtx).size();i++){
            IntegerPair v = adjList.get(vtx).get(i);
            if(!taken.get(v.first)){
                pq.add(new IntegerPair(v.second, v.first));
            }
        }

    }

    public static void main(String[] args) throws Exception{
        String path = Paths.get("").toAbsolutePath().toString()+"/src/amazon/in/MST.txt";
        Scanner sc = new Scanner(new File(path));



        int V, E, u, v, w;
        V = sc.nextInt();
        E = sc.nextInt();

        for(int i=0;i<V;i++){
            adjList.add(new Vector<IntegerPair>());
            taken.add(false);
        }

        for(int i=0;i<E;i++){
            u = sc.nextInt();
            v = sc.nextInt();
            w = sc.nextInt();

            adjList.get(u).add(new IntegerPair(v,w));
            adjList.get(v).add(new IntegerPair(u,w));

        }

        process(0);
        int mst_cost = 0;
        while(!pq.isEmpty()){
            IntegerPair front = pq.poll();
            u = front.second;
            w = front.first;
            if(!taken.get(u)){
                mst_cost +=w;
                process(u);
            }
        }
        System.out.printf("MST cost: %d(Prim's)", mst_cost);


    }
}
