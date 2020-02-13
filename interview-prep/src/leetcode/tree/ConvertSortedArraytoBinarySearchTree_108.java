package leetcode.tree;

public class ConvertSortedArraytoBinarySearchTree_108 {
    public TreeNode sortedArrayToBST(int[] nums) {
        return insert(nums, 0, nums.length - 1);
    }
    TreeNode insert(int[] nums, int l, int h){
        if(l > h) return null;
        int mid = l - (l - h) /2;
        TreeNode root =  new TreeNode(nums[mid]);
        root.left = insert(nums,l, mid - 1);
        root.right = insert(nums, mid + 1, h);
        return root;
    }
}
