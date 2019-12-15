import java.util.*;
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class BinaryTreeInOrderTraversal {
    public List<Integer> inorderTraversal(TreeNode root) {
        TreeNode current = root; 
        Stack<TreeNode> stack = new Stack<TreeNode>(); 
        List<Integer> traversalValue = new ArrayList<Integer>(); 
        while(current != null || !stack.isEmpty()){
            if(current != null){
                stack.push(current); 
                current = current.left;
            }else{
                current = stack.pop(); 
                traversalValue.add(current.val);
                current = current.right;
            }
        }
        return traversalValue;
    }
}