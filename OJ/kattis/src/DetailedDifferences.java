import java.util.Scanner;
import static java.lang.System.out;


class DetailedDifferences{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;
    static int n;
    static String first, second;


    static void takeInputFromConsole(){
        sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
    }
    static void solve(){
        while(n-- > 0){
            first = sc.nextLine();
            second = sc.nextLine();
            int len = first.length();
            String separator = "";
            for( int i = 0; i < len ;i++){
                if(first.charAt(i) == second.charAt(i)){
                    separator += ".";
                }else{
                    separator += "*";
                }
            }
            out.println(first);
            out.println(second);
            out.println(separator);
            out.println();
        }
    }


}