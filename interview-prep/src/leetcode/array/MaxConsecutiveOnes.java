class MaxConsecutiveOnes {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxOneCount = 0;
        int localCount = 0;
        for(int i = 0; i < nums.length;i++){
            if(nums[i] == 1){
                localCount++;
                maxOneCount = Math.max(maxOneCount, localCount);
            }
            else{
                localCount = 0;
            }
        }
        return maxOneCount;
    }
}