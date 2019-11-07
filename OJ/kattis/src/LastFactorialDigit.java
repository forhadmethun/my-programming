import java.util.Scanner;
import java.math.BigInteger; 
import static java.lang.System.out;


class LastFactorialDigit{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;     
    
    static int T;
    static int N;
    

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
         T = sc.nextInt(); 

    }
    static void solve(){
        while(T-- > 0){
            N = sc.nextInt();
            BigInteger mul = new BigInteger("1");
            for(int i = 1; i <= N; i++){
                mul = mul.multiply(new BigInteger(i+""));
            }
            out.println(mul.mod(new BigInteger("10")).toString());
            
        }
    }


}