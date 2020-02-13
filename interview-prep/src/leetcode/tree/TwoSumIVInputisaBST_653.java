package leetcode.tree;
import java.util.*;
public class TwoSumIVInputisaBST_653 {
    public boolean findTarget(TreeNode root, int k) {
        Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            TreeNode current = queue.poll();
            int currentVal = current.val;
            if(k - currentVal == currentVal){
                if(current.left != null && current.left.val == currentVal)return true;
                if(current.right!= null && current.right.val == currentVal)return true;
            }
            else{//} if(currentVal < k){
                if(find(root, k - currentVal)) return true;
            }
            if(current.left!=null)queue.offer(current.left);
            if(current.right!=null)queue.offer(current.right);
        }
        return false;

    }

    boolean find(TreeNode root, int val){
        if(root == null) return false;
        if(root.val == val) return true;
        if(val < root.val){
            return find(root.left, val);
        }else{
            return find(root.right, val);
        }
    }
}
