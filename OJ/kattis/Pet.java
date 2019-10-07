import java.util.Scanner;

class Pet{
    public static void main(String[] args){
        takeInputFromConsole();
        solve();
    }

    static Scanner sc; 
    static void takeInputFromConsole(){
        sc = new Scanner(System.in); 
    }
    static void solve(){
        int max = 0,person = 0;
        for(int i = 1; i <= 5; i++){
            int sum = 0; 
            for(int j = 0; j < 4; j++){
                int n = sc.nextInt(); 
                sum+= n;
            }
            if(sum > max){
                max = sum; 
                person = i;
            }
            
        }
        System.out.println(person + " " + max);

    }


}