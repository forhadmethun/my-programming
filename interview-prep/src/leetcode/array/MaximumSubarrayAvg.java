class MaximumSubarrayAvg {
    public double findMaxAverage(int[] nums, int k) {
        
        double sum = 0, avg = (double) Integer.MIN_VALUE;
       // System.out.println("a: "  + avg);
        
        for(int i = 0; i < nums.length; i++){
            sum += (double) nums[i];
            if( i>= k-1){
               // sum = Math.max(sum, sum + (double)nums[i]); 
                avg = Math.max(avg, sum / k); 
               // System.out.println(avg);
               // System.out.println("sum: " + sum/k);
                sum -= nums[i-k+1];
            }
        }
        return avg;
    }
}