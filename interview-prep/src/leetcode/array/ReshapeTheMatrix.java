class ReshapeTheMatrix {
    public int[][] matrixReshape(int[][] nums, int r, int c) {
        int[][] out = new int[r][c]; 
        int totalElementsInRows = 0; 
        for(int[] arr: nums){
            for(int n : arr){
                totalElementsInRows++;
            }
        }
        if(totalElementsInRows != r*c)return nums;
        int k = 0, l = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                out[i][j] = nums[k][l++];
                if(l == nums[k].length){
                    l = 0;
                    k++;
                }
            }
        }
        
        
        // System.out.println(totalElementsInRows);
        
        
        return out;
    }
}