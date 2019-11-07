import java.util.Scanner;

class Oddities{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc; 
    static int t;
    static int x;

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
        t = sc.nextInt();
    }
    static void solve(){
        while(t--!=0){
            x = sc.nextInt(); 
            if(x%2 == 0){
                System.out.println(x + " is even");
            }
            else{
                System.out.println(x + " is odd");
            }
        }
    }


}