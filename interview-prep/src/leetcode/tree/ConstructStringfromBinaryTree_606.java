package leetcode.tree;

public class ConstructStringfromBinaryTree_606 {
    public String tree2str(TreeNode t) {
        if(t == null) return "";
        if(t.left == null && t.right == null) return t.val + "";

        String str = "";
        str += t.val;
        if(t.left == null){
            str += "()";
        }
        // if(t.right == null){
        //     str += ")";
        // }
        if(t.left!=null){
            str += "(";
            String temp = tree2str(t.left);
            // str += t.val;

            str += temp;
            str += ")";
        }

        if(t.right!=null){
            str += "(";
            String temp = tree2str(t.right);
            // str += t.val;

            str += temp;
            str += ")";
        }
        // if(
        // t.left!= null ||
        // t.right !=null) str += ")";

        return str;
    }
}
