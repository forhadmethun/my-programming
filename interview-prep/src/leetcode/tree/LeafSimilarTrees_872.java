package leetcode.tree;
import java.util.*;
public class LeafSimilarTrees_872 {
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> root1LeafList = new ArrayList<>();
        List<Integer> root2LeafList = new ArrayList<>();
        generateRoot1LeafList(root1, root1LeafList);
        generateRoot1LeafList(root2, root2LeafList);

        if(hasSameElements(root1LeafList, root2LeafList)) return true;
        return false;
    }
    void generateRoot1LeafList(TreeNode root1, List<Integer> root1LeafList){
        if(root1 == null) return;
        else if(root1.left == null && root1.right == null){
            root1LeafList.add(root1.val);
        }
        generateRoot1LeafList(root1.left, root1LeafList);
        generateRoot1LeafList(root1.right, root1LeafList);
    }


    boolean hasSameElements(List<Integer> root1LeafList, List<Integer> root2LeafList){                                 int l1 = root1LeafList.size();
        int l2 = root2LeafList.size();
        if(l1 != l2)return false;
        for(int i = 0 ; i < l1; i++){
            //System.out.println(root1LeafList.get(i) + " - " + root2LeafList.get(i));
            if(root1LeafList.get(i) != root2LeafList.get(i)) return false;
        }
        return true;
    }
}
