import java.util.Scanner;
class Tarifa{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int X, Y;
        X = sc.nextInt(); 
        Y = sc.nextInt(); 

        int totalUsedBandwidth = 0;
        for(int i = 0; i < Y; i++){
            int currentMonthBandwidth = sc.nextInt(); 
            totalUsedBandwidth += currentMonthBandwidth;
        }
        System.out.println(X*(Y+1) - totalUsedBandwidth);

    }
}