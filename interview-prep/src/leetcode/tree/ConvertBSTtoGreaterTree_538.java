package leetcode.tree;
import java.util.*;
//todo : optimize with right side inOrder traversal & keeping track the sum
public class ConvertBSTtoGreaterTree_538 {
    List<Integer> list = new ArrayList<>();
    public TreeNode convertBST(TreeNode root) {
        inOrder(root);
        populateSummedList();
        for(int x : list){
            System.out.println(x);
        }
        convertedTree(root);
        return root;
    }
    void inOrder(TreeNode root){
        if(root == null) return;
        inOrder(root.left);
        list.add(root.val);
        inOrder(root.right);
    }
    void populateSummedList(){
        for(int i = list.size() - 2; i >=0; i--){
            list.set(i, list.get(i) +  list.get(i+1));
        }
    }
    int i = 0;
    void convertedTree(TreeNode root){
        if(root == null) return;
        convertedTree(root.left);
        root.val = list.get(i++);
        convertedTree(root.right);
    }
}
