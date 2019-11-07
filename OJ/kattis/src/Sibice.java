import java.util.Scanner;
class Sibice{
    public static void main(String[] args){
        takeInputFromConsole();
        determineFitForMatches();
    }

    static int N;
    static int W;
    static int H;
    static Scanner sc; 

    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 

        N = sc.nextInt(); 
        W = sc.nextInt(); 
        H = sc.nextInt(); 
    }
    static void determineFitForMatches(){
        for(int i = 0; i < N; i++){
            int currentMatchLenght = sc.nextInt(); 
            if(currentMatchLenght<= W || 
               currentMatchLenght <=H ||
               currentMatchLenght * currentMatchLenght <= W*W + H*H){
                System.out.println("DA");
            }else{
                System.out.println("NE");
            }
        }
    }
}