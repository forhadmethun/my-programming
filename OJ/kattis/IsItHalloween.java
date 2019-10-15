import java.util.Scanner;
import static java.lang.System.out;


class IsItHalloween{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;     
    static String input;

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
        input = sc.nextLine();

    }
    static void solve(){
        if(input.split(" ")[0].equals("OCT") && input.split(" ")[1].equals("31") || 
           input.split(" ")[0].equals("DEC") && input.split(" ")[1].equals("25") 
        ) {
            out.println("yup");
         }
         else out.println("nope");
    }


}