package topic_wise.algorithm.dp.recursion;

public class InOrderTraversal {
    static class Node{
        int data;
        Node left;
        Node right;
    }
    void inOrder(Node root){
        if(root == null) return;
        if(root.left != null) inOrder(root.left);
        System.out.println(root.data);
        if(root.right != null) inOrder(root.right);
    }
}
