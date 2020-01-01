class CanPlaceFlower {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int len = flowerbed.length; 
        int count = 0;
        if(len == 1 && flowerbed[len-1] == 0) count = 1; 
        int i = 0;
        if(i == 0 && len > 1){
            if(i <= len - 2 && flowerbed[i]!=1 && flowerbed[i+1]==0){
                count++; 
                flowerbed[i] = 1;
            }
        }
        for(i = 1; i <=len -2; i++){
            if(flowerbed[i]!=1 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                count++; 
                flowerbed[i] = 1;
            }
        }
        i = len - 1;
        if(i == len - 1 && len > 0){
            if(i > 0 && flowerbed[i]!=1 && flowerbed[i-1] == 0){
                count++;
            }
        }
        if(count >= n) return true; 
        return false;
    }
}