import java.util.*;

public class ArmstrongNumber {
    public static void main (String[] args) {
        //code
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while( t-- > 0 ){
            int n = sc.nextInt();
            int temp = n,ans=0;
            while(temp!=0){
                int mod = temp%10;
                temp = temp / 10;
                ans+=mod*mod*mod;
            }
            if(ans == n){
                System.out.println("Yes");

            }else{
                System.out.println("No");
            }
        }
    }
}
