import java.util.Scanner;
import static java.lang.System.out;

class Ladder{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;     

    static double h,v;
    

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
         h = sc.nextDouble(); 
         v = sc.nextDouble();

    }
    static void solve(){
        System.out.println((int)Math.ceil(h / Math.sin((Math.PI * v)/180.0)));
    }


}