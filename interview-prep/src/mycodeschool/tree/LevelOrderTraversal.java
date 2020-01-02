package mycodeschool.tree;
import java.util.*;
public class LevelOrderTraversal {

    void levelOrder(TreeNode node){
        if(node == null) return;
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(node);
        while (!queue.isEmpty()){
            TreeNode top = queue.remove();
            System.out.printf("%d ", top.data);
            if(top.left!=null)queue.add(top.left);
            if(top.right!=null)queue.add(top.right);
        }
        System.out.println();
    }

    void checkLevelOrder(){
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(2);
        root.right = new TreeNode(7);
        root.right.right = new TreeNode(12);
        levelOrder(root);
    }

    public static void main(String[] args) {
        LevelOrderTraversal lot = new LevelOrderTraversal();
        lot.checkLevelOrder();
    }
}
