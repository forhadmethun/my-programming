package topic_wise.algorithm.dp.recursion;

class TowerOfHanoi {
    void toh(char s, char d, char e, int n){
        if(n <= 0) return;
        toh(s, e, d, n - 1);
        System.out.println("move " + s + " to " + d); 
        toh(e, d, s, n - 1); 
    }
}