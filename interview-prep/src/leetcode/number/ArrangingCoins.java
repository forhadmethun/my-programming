class ArrangeCoins {
    public int arrangeCoins(int n) {
        /*
        int count = 1; 
        while( count * ( count + 1)/2 <= n ){
            //System.out.println( count * ( count + 1)/2);
            //System.out.println(count);
            count++;
        }   
        return count - 1;
        */
        double x = (double) n; 
        double count = Math.sqrt(1.0 + 8.0*n) - 1.0 ; 
        count = count / 2.0; 
        return (int) count;
    }
}