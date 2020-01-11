package leetcode.tree;

public class MergeTwoBinaryTrees_617 {
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if(t1 == null && t2 == null) return null;

        if(isLeafNode(t1) && t2 == null){
            return new TreeNode(t1.val);
        }
        if(isLeafNode(t2) && t1 == null){
            return new TreeNode(t2.val);
        }
        if(isLeafNode(t1) && isLeafNode(t2)){
            return new TreeNode(t1.val + t2.val);
        }
        TreeNode root = new TreeNode((t1 == null? 0 : t1.val) + (t2 == null ? 0 : t2.val));
        root.left = mergeTrees(t1 == null ? null : t1.left, t2 == null? null : t2.left);
        root.right= mergeTrees(t1 == null ? null : t1.right, t2 == null? null : t2.right);
        return root;


    }
    boolean isLeafNode(TreeNode t){
        if(t != null && t.left == null && t.right == null){
            return true;
        }
        return false;
    }
}
