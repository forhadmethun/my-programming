class ProductOfArrayExceptSelf {
    public int[] productExceptSelf(int[] nums) {
        int mul = 1; 
        int zeroCount = 0;
        int zeroIndex = 0;
        for(int i = 0; i < nums.length ;i ++){
            int num = nums[i];
            if(num==0){
                zeroCount++;
                zeroIndex = i;
            }
            
            if(num!=0){
                mul = mul * num;
            }
            
        }
        
        int[] out = new int[nums.length];
        
        if(zeroCount >=2) return out; 
        if(zeroCount == 0){
            for(int i = 0; i < nums.length; i++){
                    out[i] = mul / nums[i];
            }
        }
        if(zeroCount == 1){
            out[zeroIndex] = mul;
        }
        return out;
        
    }
}