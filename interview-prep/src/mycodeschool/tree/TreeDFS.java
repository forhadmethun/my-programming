package mycodeschool.tree;

class TreeDFS{

    void preOrder(TreeNode node){
        if(node == null) return;
        System.out.println(node.data);
        preOrder(node.left);
        preOrder(node.right);
    }
    void inOrder(TreeNode node){
        if(node == null) return;
        inOrder(node.left);
        System.out.println(node.data);
        inOrder(node.right);
    }
    void postOrder(TreeNode node){
        if(node == null) return;
        postOrder(node.left);
        postOrder(node.right);
        System.out.println(node.data);
    }

    public static void main(String[] args) {
        TreeDFS t = new TreeDFS();
    }
}