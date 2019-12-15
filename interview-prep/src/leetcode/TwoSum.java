import java.util.*; 
class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numberIndexMap = new HashMap<>();
        int[] indices = new int[2]; 
        	for(int i = 0; i < nums.length; i++){
            Integer secondNumber = nums[i];
            Integer firstIndex= numberIndexMap.get(target-secondNumber) ;
            if(firstIndex!=null){
                indices[1]= i;
                indices[0]= firstIndex;
                break;
            }
	        else {
             numberIndexMap.put(nums[i], i); 
            }
        }
        return indices;

    }
}