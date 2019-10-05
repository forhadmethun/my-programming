import java.util.Scanner;

class R2{
    
    public static void main(String[] args){
        takeInputFromConsole();
        solve(); 
    }
    static Scanner sc;
    public static int R1, S;
    static void takeInputFromConsole(){
        sc = new Scanner(System.in);
        R1 = sc.nextInt(); 
        S  = sc.nextInt();
    }
    static void solve(){
        System.out.println(2*S - R1);
    }


}