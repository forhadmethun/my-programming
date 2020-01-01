class BinaryGap {
    public int binaryGap(int N) {
        StringBuffer bin = new StringBuffer(); 
        for(int i = 0; i < 32; i++){
            bin.append((N) & 1); 
            N = N >> 1; 
        }
        int longestDistance = 0; 
        String binStr = bin.toString();
        for(int i = 0; i < binStr.length(); i++){
            if(binStr.charAt(i) == '1'){
                int count = 0;
                for(int j = i + 1; j < binStr.length(); j++){
                    count++;
                    if(binStr.charAt(j) == '1'){                        
                        longestDistance = Math.max(longestDistance, count);
                        break;
                    }
                     
                }
            }
        }
        //System.out.println(bin.toString()); 
        return longestDistance;
        
    }
}