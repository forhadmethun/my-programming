import java.util.Scanner;
class Spavanac{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in); 
        int H = sc.nextInt(); 
        int M = sc.nextInt(); 

        int totalMinutes = H * 60 + M + 24 * 60; //adding one day to fix 0 related issue
        int reduceTotalMinutesBy45Minutes = totalMinutes - 45; 

       
        int outputMinute = reduceTotalMinutesBy45Minutes % 60; 
        int outputHour = ((totalMinutes - outputMinute) / 60 ) %24; 
        System.out.println(outputHour + " " + outputMinute);
        
    }
}