import java.util.Scanner;

class Pot {
    public static void main(String[] args) {
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;
    static int N;

    static void takeInputFromConsole() {
        sc = new Scanner(System.in);
        N = sc.nextInt();
    }

    static void solve(){
        int X = 0;
        for(int i = 0; i < N; i++){
            int P = sc.nextInt(); 
            X += (int)Math.pow(P/10, P%10);
        }
        System.out.println(X);
    }

}       