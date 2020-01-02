import java.util.Arrays;
import java.util.*;

class MaximumProductOfThreeNumbers {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int length = nums.length; 
        int f1 = 0, f2 = 1, f3 = 2;
        int l1 = length - 1, l2 = length - 2, l3 = length - 3;
        int max1 = nums[l1] * nums[l2]* nums[l3]; 
        int max2 = nums[f1] * nums[f2]* nums[l1]; 
        if(max1 >= max2)return max1;
        return max2;
    }
}