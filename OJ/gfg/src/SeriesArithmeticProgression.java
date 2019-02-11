import java.util.*;
public class SeriesArithmeticProgression {
    public static void main (String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while(t-- > 0){
            int a, b, n;
            a = sc.nextInt();
            b = sc.nextInt();
            n = sc.nextInt();

            int diff = b-a;
            n = a + (n-1) * diff;
            System.out.println(n);

        }
    }
}
