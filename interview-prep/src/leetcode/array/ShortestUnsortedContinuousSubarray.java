class ShortestUnsortedContinuousSubarray {
    public int findUnsortedSubarray(int[] nums) {
        if(nums.length == 0 )return 0;
        if(nums.length == 1) return 0;
        int start = 0;
        int end = nums.length - 1;
        while(start + 1 < nums.length && nums[start+1] >= nums[start])start++;
        while(end - 1 >=0 && nums[end-1] <= nums[end]) end--;
     System.out.println("s: " + start + ", end:" + end);
        /*
        boolean dhuksi = false;
        while(nums[start] > nums[end]){
            dhuksi = true;
           start--;
        }
        if(dhuksi)start++;
        // while()
        */
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        for(int i = start; i <= end; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        
        boolean dhuksi1 = false;
        while(start>=0 && nums[start] > min ) {
            dhuksi1 = true;
            start--;
        }
        if(dhuksi1) start++ ;
        boolean dhuksi2 = false;
        while(end < nums.length && nums[end] < max) {
            dhuksi2 = true;
            end++;
        }
        if(dhuksi2)end--;

        //System.out.println("s: " + start + ", end:" + end);
        return end - start + 1 < 0 ? 0 : end - start + 1;
    }
}