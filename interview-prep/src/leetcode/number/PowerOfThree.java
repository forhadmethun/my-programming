class PowerOfThree {
    public boolean isPowerOfThree(int n) {
        //don't forget about corner case
        if(n <=0 ) return false;
        // 3 ^ 19 is the biggest number can be hold in the integer
        if(1162261467 % n == 0)return true;
        return false;
    }
}