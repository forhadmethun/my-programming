import java.util.Scanner;

class Planina{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc; 
    static int N;
    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
         N = sc.nextInt(); 

    }
    static void solve(){
        int p = 1;
        for(int i = 1; i<= N; i++){
            p *=2; 
        }
        System.out.println((p+1)*(p+1));
    }


}