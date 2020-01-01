class AddBinary {
    public String addBinary(String a, String b) {
        String big, small; 
        if(a.length() > b.length()){
            big = a; 
            small = b;
        }else{
            big = b; 
            small = a;
        }
        int diff = big.length() - small.length(); 
        //System.out.println(diff);
        while(diff -- > 0){
            small = "0" + small;
        }
       // System.out.println("b: "  + big);
        //System.out.println("s: " + small);
        int carry = 0;
        StringBuilder sb = new StringBuilder();
        for(int i = big.length() - 1 ; i >= 0; i--){
            int na = Character.getNumericValue(small.charAt(i));
            int nb = Character.getNumericValue(big.charAt(i));
            int sum = (na + nb + carry)%2; 
            sb.append(sum);
             carry = (na + nb + carry) / 2; 
        }
        if(carry > 0){
            sb.append(carry);
        }
        return sb.reverse().toString();
    }
}