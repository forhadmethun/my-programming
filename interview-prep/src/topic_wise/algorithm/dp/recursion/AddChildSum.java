package topic_wise.algorithm.dp.recursion;

public class AddChildSum {
    void addChildSum(InOrderTraversal.Node root){
        if(root == null) return;
        addChildSum(root.left);
        addChildSum(root.right);
        int finalSum = root.data;
        if(root.left!= null) finalSum += root.left.data;
        if(root.right!=null) finalSum += root.right.data;
        root.data = finalSum;
    }
}
