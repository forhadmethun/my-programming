import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PerfectNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            List<Long> factors = new ArrayList();
            int sqrt = (int) Math.sqrt((double) n);
            for (int i = 1; i <= sqrt; i++) {
                if (n % i == 0) {
                    factors.add((long)i);
                    if(i!=1)factors.add((long) n/i);
                }
            }
            long sum =0;
            for(int i=0;i<factors.size();i++){
//                System.out.printf(" %d",factors.get(i));
                sum+=factors.get(i);
            }
            if(sum == n){

                System.out.println(1);
            }else{
                System.out.println(0);
            }
        }
    }
}
