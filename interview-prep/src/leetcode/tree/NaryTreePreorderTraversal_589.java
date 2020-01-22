package leetcode.tree;
import java.util.*;
class Node {
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

public class NaryTreePreorderTraversal_589 {
    List<Integer> output = new ArrayList<>();
    public List<Integer> preorder(Node root) {
        preOrderHelper(root);
        return output;
    }
    void preOrderHelper(Node root){
        if(root == null) return;
        output.add(root.val);
        for(int i = 0; i < root.children.size(); i++){
            preOrderHelper(root.children.get(i));
        }

    }
}
