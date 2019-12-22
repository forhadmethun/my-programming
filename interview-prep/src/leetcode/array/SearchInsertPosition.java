class SearcInsertPosition{
    public int searchInsert(int[] nums, int target) {
        
        int low = 0; 
        int high = nums.length - 1; 
        if(nums[high] < target) return high + 1; 
        if(nums[0] > target) return 0;
        
        while(low < high){
            int mid = (low + high) / 2;     
            if(nums[mid] == target){
                return mid;
            }
            if(target > nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1; 
            }
        }
        int i = Math.min(low, high); 
        while(nums[i] < target){
            i++;
        }
        
        return i;
    }
}