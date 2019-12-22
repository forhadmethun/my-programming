class PerfectNumber {
    public boolean checkPerfectNumber(int num) {
        if(num<=0)return false;
        Set<Integer> factorSet = new HashSet<>();
//        factorSet.add(1);

        for(int i = 1; i < num; i++){
            if(factorSet.contains(i))break;
            if(num % i == 0 ){
                factorSet.add(i);
                factorSet.add(num/i);
            }
        }
        int factorSum = 0;
        for(Integer factor : factorSet){
            factorSum += factor;
        }
        //factorSet.forEach(System.out::println);
        return (factorSum-num) == num;
    }
}