import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

import static java.lang.System.out;


class Everywhere{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;
    static int t;



    static void takeInputFromConsole(){
        sc = new Scanner(System.in);
        t = sc.nextInt();


    }
    static void solve(){
        while(t-- > 0){
            int n; n = sc.nextInt();
            sc.nextLine();
            Set<String> stringSet = new HashSet<>();
            for(int i = 0; i < n;i ++){
                String str = sc.nextLine();
                stringSet.add(str);
            }
            System.out.println(stringSet.size());
        }
    }


}