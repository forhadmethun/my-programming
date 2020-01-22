package leetcode.tree;

public class SearchinaBinarySearchTree_700 {
    public TreeNode searchBST(TreeNode root, int val) {
        if(root == null){
            return null;
        }
        if(root.val == val){
            return root;
        }
        TreeNode leftSubtree = searchBST(root.left, val);
        TreeNode rightSubtree = searchBST(root.right, val);
        if(leftSubtree == null){
            return rightSubtree;
        }
        return leftSubtree;
    }
}
