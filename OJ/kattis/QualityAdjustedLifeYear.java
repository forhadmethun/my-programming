import java.util.Scanner;

class QualityAdjustedLifeYear{
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
        double qaly = 0;
        for(int i = 1; i <= N; i++){
            double a = sc.nextDouble(); 
            double b = sc.nextDouble(); 
            qaly += a*b; 
        }
        System.out.printf("%.3f\n",qaly);
    }


}