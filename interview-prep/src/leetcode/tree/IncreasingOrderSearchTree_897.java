package leetcode.tree;

public class IncreasingOrderSearchTree_897 {
    TreeNode outputNode = null;
    public TreeNode increasingBST(TreeNode root) {
        return increasingBSTHelper(root, null);
        /*
        if(root == null && outputNode == null) return null;
        else if(root == null && outputNode !=null) return outputNode;
        else if(root.left == null && root.right == null){
            outputNode =  new TreeNode(root.val);
            return outputNode;
        }
        TreeNode result = increasingBST(root.left);
        TreeNode rootNode = new TreeNode(root.val);
        outputNode = rootNode;
        if(result!=null){
            result.right = rootNode;

        }
        else{
            result = rootNode;

        }
        rootNode.right = increasingBST(root.right);

        return result;
        */
    }
    public TreeNode increasingBSTHelper(TreeNode root, TreeNode tail) {
        if(root == null) return tail;
        TreeNode result = increasingBSTHelper(root.left, root);
        root.left = null;
        root.right = increasingBSTHelper(root.right, tail);
        return result;
    }
}
