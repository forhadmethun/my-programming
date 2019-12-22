class CountPrimes {
    public int countPrimes(int n) {
        long m = (long) n ;
        List<Boolean> bs = new ArrayList<Boolean>(Arrays.asList(new Boolean[n+1]));
        Collections.fill(bs,Boolean.TRUE);
        if(n>=0)bs.set(0,false);
        if(n>=1)bs.set(1,false);
        List<Long> primes = new ArrayList<>();
        for(long i = 2; i < n; i++){
            if(bs.get((int)i)){
                for(long j = i*i ; j < m; j+=i){                
                    bs.set((int)j,false);                        
                }
                primes.add(i);
            }
            
        }
        return primes.size();
        
    }
}