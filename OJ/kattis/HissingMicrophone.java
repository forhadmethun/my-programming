import java.util.Scanner;
import static java.lang.System.out;


class HissingMicrophone{
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
        int length = input.length();
        boolean isHiss = false;
        for(int i = length - 1 ; i >= 1; i--){
            if(input.charAt(i) == 's')if(input.charAt(i) == input.charAt(i-1)){
                isHiss = true;
                break;
            }
        }
        if(isHiss){
            out.println("hiss");
        }else{
            out.println("no hiss");
        }
    }


}