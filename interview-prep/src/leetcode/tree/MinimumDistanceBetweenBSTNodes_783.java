package leetcode.tree;
/*
https://leetcode.com/problems/minimum-absolute-difference-in-bst/discuss/99905/Two-Solutions-in-order-traversal-and-a-more-general-way-using-TreeSet
//for all sort of tree
//the following solution is just for BST
 */
public class MinimumDistanceBetweenBSTNodes_783 {
    int diff = Integer.MAX_VALUE; TreeNode lastTraversedNode = null;
    public int minDiffInBST(TreeNode root) {
        minDiffInBSTUtil(root);
        return diff;
    }
    void minDiffInBSTUtil(TreeNode root){
        if(root == null) return;
        minDiffInBST(root.left);
        if(lastTraversedNode != null){
            diff = Math.min(diff, root.val - lastTraversedNode.val);
        }
        lastTraversedNode = root;
        minDiffInBST(root.right);
    }
}
