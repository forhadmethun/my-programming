class BestTimeToBuyAndSellStock {
    public int maxProfit(int[] prices) {
        int minNumber = Integer.MAX_VALUE,  maxNumber= Integer.MIN_VALUE, profit = 0; 
        for(int i = 0 ; i < prices.length; i++){
            if(prices[i] > maxNumber){
                maxNumber = prices[i];
            }
            if(prices[i] < minNumber){
                maxNumber = 0;
                minNumber = prices[i];
            }
            if(maxNumber >= minNumber && maxNumber - minNumber > profit){
                profit = maxNumber - minNumber;
            }
        }
        return profit;
    }
}