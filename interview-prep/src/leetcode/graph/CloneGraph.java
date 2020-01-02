package leetcode.graph;

import java.util.*;

// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;

    public Node() {}

    public Node(int _val,List<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
class CloneGraph {
    public Node cloneGraph(Node node) {
        if(node == null) return null; 
        Map<Node, Node> map = new HashMap<>(); 
        dfs(map, node); 
        return map.get(node); 
    }
    void dfs(Map<Node, Node> map, Node node){
        if(map.containsKey(node)) return; 
        map.put(node, new Node(node.val, new ArrayList<>()));
        for(Node neighbor: node.neighbors){
            dfs(map, neighbor); 
            map.get(node).neighbors.add(map.get(neighbor));
        }
    }
}