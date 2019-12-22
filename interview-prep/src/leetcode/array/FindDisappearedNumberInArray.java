class FindDisappearedNumberInArray {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> outputList = new ArrayList<>(); 
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0)continue;
            int temp = nums[i] - 1; 
            while(nums[temp]!=0){
                int dummy = temp;
                temp = nums[temp] - 1; 
                nums[dummy] = 0;
            }
        }
        int count = 0;
        for(int i = 0;i < nums.length; i++){
            if(nums[i]!=0){
                outputList.add(i+1);
            }
        }
        return outputList;
        
    }
}