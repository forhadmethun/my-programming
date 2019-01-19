package amazon;
import java.util.Queue;
import java.util.LinkedList;
//idea: level order traversal
public class MaximumWidthOfBinaryTree {
    static class Node{
        int data;
        Node left,right;
        Node(int data){this.data = data;}
    }
    static int maxWidth(Node root){
        Queue<Node> queue = new LinkedList();
        int width = 0;
        queue.add(root);
        while(!queue.isEmpty()){
            width = Math.max(queue.size(),width);
            Node current = queue.poll();
            if(current.left!=null)queue.add(current.left);
            if(current.right!=null)queue.add(current.right);
        }
        return width;
    }
    public static void main(String[] args){
               /*
                         1
                      2     3
                    4    5
                         7     6



         */
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.right = new Node(3);
        root.right.right = new Node(6);
        root.right.left = new Node(7);

        int width = maxWidth(root);
        System.out.println(width);

    }
}
