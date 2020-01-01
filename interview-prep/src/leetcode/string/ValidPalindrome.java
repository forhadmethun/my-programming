class ValidPalindrome {
    public boolean isPalindrome(String s) {
        StringBuilder alphanumericStringBuilder = new StringBuilder();   
        for(int i = 0; i < s.length(); i++){
            if(Character.isLetter(s.charAt(i)) || Character.isDigit(s.charAt(i))){
                alphanumericStringBuilder.append(Character.toLowerCase(s.charAt(i)));
            }
        }
        String str = new String(alphanumericStringBuilder); 
        String reverseStr = alphanumericStringBuilder.reverse().toString(); 
        //System.out.println("str: " + reverseStr); 
        //System.out.println("rev: " + str);
        if(str.compareTo(reverseStr) == 0){
            return true;
        }else{
            return false;
        }
    }
}