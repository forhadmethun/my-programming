package leetcode.tree;
import java.util.*;
public class AverageofLevelsinBinaryTree_637 {
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> result = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        double prev = 0;
        queue.add(root);
        prev = 1;
        //result.add(root.val);
        while(!queue.isEmpty()){
            double sum = 0;
            for(int i = 0; i < prev; i++){
                TreeNode current = queue.poll();
                sum+= current.val;
                if(current.left!=null){
                    queue.add(current.left);
                }
                if(current.right!=null){
                    queue.add(current.right);
                }
            }
            result.add(sum/prev);
            prev = (double)queue.size();
        }
        return result;
    }
}
