package leetcode.tree;
import  java.util.*;
public class MaximumDepthofNaryTree_559 {
    // Definition for a Node.
    static class Node {
        public int val;
        public List<Node> children;

        public Node() {}

        public Node(int _val) {
            val = _val;
        }

        public Node(int _val, List<Node> _children) {
            val = _val;
            children = _children;
        }
    };

    static class Solution {
        public int maxDepth(Node root) {
            if(root == null) return 0;
            if(root.children == null) return 1;
            //int lDepth = maxDepth(root.left);
            //int rDepth = maxDepth(root.right);
            int max = 0;
            for(Node child : root.children){
                max = Math.max(max, maxDepth(child));
            }
            return 1 + max;
        }
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        Node root1 = new Node(1);
        Node root2 = new Node(3);
        Node root3 = new Node(2);
        Node root4 = new Node(4);
        Node root5 = new Node(5);
        Node root6 = new Node(6);
        root1.children = Arrays.asList(null, root3, root2, root4);
        root3.children = Arrays.asList(root5, root6);

        System.out.println(solution.maxDepth(root1));
    }
}
