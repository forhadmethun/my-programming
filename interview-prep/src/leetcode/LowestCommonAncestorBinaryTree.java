// LowestCommonAncestorBinaryTree.java
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class LowestCommonAncestorBinaryTree {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if(root == null) return null; 
        if(root == p || root == q)return root;
        //System.out.println("root data: " + root.val); 
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        //System.out.println("p: " + p.val);
        //System.out.println("left: " + left.val);
        TreeNode right = lowestCommonAncestor(root.right, p,q); 
        //System.out.println("q: " + q.val);
        //System.out.println("right: " + right.val);
        if((left == q && right == p) || (left == p && right == q))return root; 
        return (left != null)? left: right;
    }
}