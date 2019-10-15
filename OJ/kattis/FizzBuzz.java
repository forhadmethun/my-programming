import java.util.Scanner;
import static java.lang.System.out;


class FizzBuzz{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;    
    static int x,y,n; 
    
    

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
        x = sc.nextInt(); 
        y = sc.nextInt(); 
        n = sc.nextInt();

    }
    static void solve(){ 
        for(int i = 1; i <= n; i++){
            if( i%x == 0 && i %y == 0 ){
                out.println("FizzBuzz");
            }
            else if(i % x == 0){
                out.println("Fizz");
            }
            else if(i % y == 0){
                out.println("Buzz");
            }
            else{
                out.println(i);
            }
        }
    }


}