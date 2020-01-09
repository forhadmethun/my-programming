package leetcode.tree;
public class SumofRootToLeafBinaryNumbers_1022 {
    public int sumRootToLeaf(TreeNode root) {
        return sumRootToLeafHelper(root,"");
    }
    int sumRootToLeafHelper(TreeNode root, String s){
        if(root == null) return 0;
        if(root.left == null & root.right == null){
            return Integer.parseInt(s + root.val, 2);
        }
        int left = sumRootToLeafHelper(root.left, s + root.val);
        int right= sumRootToLeafHelper(root.right, s + root.val);
        return left + right;
    }
}