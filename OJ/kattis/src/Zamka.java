import java.util.Scanner;
class Zamka{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int L, D, X, N = 0, M = 0;
        L = sc.nextInt();
        D = sc.nextInt();
        X = sc.nextInt();

        int l, d;
        l = L; d = D;

        while(l <= d){
            N = l;if(digitSum(l) == X)break;
            l++;
        }
        l = L; d = D;
        while(d >= l){
            M = d;if(digitSum(d) == X)break;
            d--;
        }
        System.out.println(N);
        System.out.println(M);

    }

    public static int digitSum(int n){
        int sum = 0;
        while(n!=0){
            sum+= n%10;
            n = n/10;
        }
        return sum;
    }
}