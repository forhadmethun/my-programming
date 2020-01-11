package leetcode.tree;

public class RangeSumofBST_938 {
    public int rangeSumBST(TreeNode root, int L, int R) {
        if(root == null)return 0;
        if(isChildNode(root) && isWithinRange(root.val, L,R))return root.val;
        if(isChildNode(root) && !isWithinRange(root.val, L, R)) return 0;
        int left = rangeSumBST(root.left, L, R);
        int right = rangeSumBST(root.right, L, R);
        if(isWithinRange(root.val, L, R)) return root.val + left + right;
        return left + right;
    }
    boolean isChildNode(TreeNode root){
        if(root !=null && root.left == null && root.right == null)return true;
        return false;
    }
    boolean isWithinRange(int val, int L, int R){
        if(val >=L && val <=R) return true;
        return false;
    }
}
