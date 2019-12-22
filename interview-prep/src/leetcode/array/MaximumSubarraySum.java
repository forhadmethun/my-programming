class MaximumSubarraySum {
    public int maxSubArray(int[] nums) {
        // return kadaneMaxSubArraySum(nums);
        return divideAndConqureMaxSubArraySum(nums, 0, nums.length - 1);
    }
    int divideAndConqureMaxSubArraySum(int[] nums, int l, int h){
        if(l == h){
            return nums[l];
        }
        int m = (l+h) / 2; 
        return Math.max(Math.max(divideAndConqureMaxSubArraySum(nums, l, m), divideAndConqureMaxSubArraySum(nums, m+1, h)),maxCrossingSum(nums,l,h,m)); 
    }
    int maxCrossingSum(int[] nums, int l, int h, int m){
        int sum = 0; 
        int leftSum = Integer.MIN_VALUE;
        for(int i = m; i >=l; i--){
            sum = sum + nums[i]; 
            if(sum > leftSum){
                leftSum = sum;
            }
        }
        sum = 0;
        int rightSum = Integer.MIN_VALUE;
        for(int i = m+1; i <= h; i++){
            sum = sum + nums[i]; 
            if(sum > rightSum){
                rightSum = sum;
            }
        }
        return leftSum + rightSum;
    }
    int kadaneMaxSubArraySum(int[] nums){
        int max_so_far = 0;
        
        int max_ending_here = Integer.MIN_VALUE;
        
        for(int i = 0; i < nums.length; i++){
            max_so_far = Math.max(nums[i], nums[i] + max_so_far); 
            if(max_so_far > max_ending_here){
                max_ending_here = max_so_far;
            }
        }
        return max_ending_here;
    }
}