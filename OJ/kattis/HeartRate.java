import java.util.Scanner;
import static java.lang.System.out;


class HeartRate{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;  
    static int t;    
    static double b, p; 
    

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
         t = sc.nextInt();
         
    }
    static void solve(){
        while( t-- > 0){
            b = sc.nextDouble(); 
            p = sc.nextDouble();

            double min, cur, max;
            min = (b-1) * 60.0 / p; 
            cur = b * 60.0 / p; 
            max = (b+1) * 60.0 / p; 

            System.out.printf("%.4f %.4f %.4f\n", min, cur, max);
        }
    }


}