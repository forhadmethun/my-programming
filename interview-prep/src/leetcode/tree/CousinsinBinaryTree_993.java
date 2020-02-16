package leetcode.tree;

public class CousinsinBinaryTree_993 {
    TreeNode parentX = null, parentY = null;
    int depthX = -1, depthY = -1;

    public boolean isCousins(TreeNode root, int x, int y) {
        dfs(root, x, y,0, null);
        if(depthX != depthY)return false;
        if(parentX == parentY)return false;
        return true;
    }

    void dfs(TreeNode root, int x, int y,int depth, TreeNode parent){
        if(root == null) return;
        if(root.val == x){
            parentX = parent;
            depthX = depth;
        }
        if(root.val == y){
            parentY = parent;
            depthY = depth;
        }
        if(root.left!=null)dfs(root.left,x, y, depth + 1, root);
        if(root.right != null) dfs(root.right, x, y, depth + 1, root);
    }

}
