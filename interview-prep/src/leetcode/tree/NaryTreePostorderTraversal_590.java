package leetcode.tree;
import java.util.*;
public class NaryTreePostorderTraversal_590 {
    public List<Integer> postorder(Node root) {
        postOrderHelper(root);
        return output;
    }

    List<Integer> output = new ArrayList<>();

    void postOrderHelper(Node root){
        if(root == null) return;

        for(int i = 0; i < root.children.size(); i++){
            postOrderHelper(root.children.get(i));
        }
        output.add(root.val);

    }
}
