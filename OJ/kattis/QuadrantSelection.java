import java.util.Scanner;

class QuadrantSelection{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc;
    static int x, y; 
    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
        x = sc.nextInt(); 
        y = sc.nextInt();
    }
    static void solve(){
        int quadrant = 0; 
        if(x > 0 && y >0 ){
            quadrant = 1;
        }
        else if(x <0 && y > 0){
            quadrant = 2;
        }
        else if(x <0 && y < 0){
            quadrant = 3;
        }
        else if(x >0 && y < 0){
            quadrant = 4;
        }
        System.out.println(quadrant);
    }


}