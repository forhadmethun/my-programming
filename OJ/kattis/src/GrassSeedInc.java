import java.util.Scanner;
import static java.lang.System.out;


class GrassSeedInc{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;     
    static double cost, width, length, sum = 0;
    static int L;
    

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
        cost = sc.nextDouble(); 
        L = sc.nextInt();

    }
    static void solve(){
        while(L-- > 0){
            width = sc.nextDouble(); 
            length = sc.nextDouble(); 
            sum+= width * length;
        }
        System.out.printf("%.7f\n",sum*cost);

    }


}