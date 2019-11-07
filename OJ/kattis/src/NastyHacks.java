import java.util.Scanner;
import static java.lang.System.out;

class NastyHacks{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;
    
    static int n, r, e, c; 
    
    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
         n = sc.nextInt();
    }
    static void solve(){
        while(n-- > 0){
            r = sc.nextInt(); 
            e = sc.nextInt(); 
            c = sc.nextInt(); 
            if( e - c == r){
                out.println("does not matter");
            }
            else if(e - c > r){
                out.println("advertise");
            }
            else{
                out.println("do not advertise");
            }
        }
    }


}