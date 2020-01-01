import java.util.*;
/*
copied from other hence accepted!!! -_- 

*/
class uva_100{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            long i, j; 
            i = sc.nextInt(); 
            j = sc.nextInt();
            long p,q;
            p = Math.min(i,j); 
            q = Math.max(i,j);
            int max = Integer.MIN_VALUE; 
            for(long x = p; x<= q;x++){
                max = Math.max(max, cycleLength(x));
            }
            System.out.println(i + " " + j + " " + max);
        }
        //System.out.println();
        //System.out.println(cycleLength(22));
    }
    /*
    static int[] cache = new int[1000000+1]; 

    static long cycleLength(long n){
        if(n == 1){
            cache[1] = 1; 
            return 1;
        }
        if (n < 1000000 && cache[(int)n] != 0)return cache[(int)n];

        long count = 1;
        while(n != 1){
            if(n%2!=0){
                n = 3 * n + 1;
            }
            else n = n /2;
            count++;
        }
        if( n <= 1000000){
            int x = (int) n;
            cache[x] = (int) count;
        }

        return count; 
    }
    */
    // cache for already computed cycle lengths
public static int[] cache = new int[1000000];
 
public static int cycleLength(long n) {
    // our base case
    // 1 has a cycle length of 1
    if (n == 1)
        return 1;
 
    // check if we've already cached the
    // cycle length of the current number
    if (n < 1000000 && cache[(int)n] != 0)
        return cache[(int)n];
 
    // the cycle length of the current number is 1 greater
    // than the cycle length of the next number
    int length = 1 + cycleLength(next(n));
 
    // we cache the result if the
    // current number is not too big
    if (n < 1000000)
        cache[(int)n] = length;
 
    return length;
}
// a function that returns the
// next number in the sequence
public static long next(long n) {
    if (n % 2 == 0)
        return n / 2;       // if n is even
    else
        return 3 * n + 1;   // if n is odd
}

}