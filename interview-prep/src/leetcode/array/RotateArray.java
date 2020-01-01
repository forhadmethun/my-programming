class RotateArray {
    public void rotate(int[] nums, int k) {
        for(int i = 0 ; i < k; i++){
            rightRotateOnce(nums);
        }
    }
    public void rightRotateOnce(int[] nums){
        int length = nums.length;
        int last = nums[length - 1]; 
        for(int i = length - 2; i >= 0 ; i--){
            nums[i+1] = nums[i];
        }
        nums[0] = last;
    }
}