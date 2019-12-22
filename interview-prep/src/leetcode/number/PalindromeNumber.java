class PalindromeNumber {
    /*
    public boolean isPalindrome(int x) {
        String originalNumberString  = "" + x; 
        String reversedNumberString  = new StringBuilder(originalNumberString).reverse().toString(); 
        if(originalNumberString.compareTo(reversedNumberString) == 0){
            return true;
        }
        return false;
    }
    */
    
    public boolean isPalindrome(int x) {
        if(x < 0 || (x > 0  && x % 10 == 0)) return false;
        int originalX = x;
        int reverseX  = 0;
        while(x > 0 ){
            reverseX = reverseX * 10 + x % 10; 
            x = x / 10;
        }
        if(reverseX == originalX)return true; 
        return false;
    }
   
}