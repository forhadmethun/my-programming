import java.util.*;
import java.io.*;
/*
Input
1
10 3
1 2 3 4 5 6 7 8 9 10

Output
3 2 1 5 4
 */
public class ReverseArrayInGroups {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t =Integer.parseInt(br.readLine());
        while( t-- >  0){
            String[] narr = br.readLine().split(" ");
             int n= Integer.parseInt(narr[0]);
             int g= Integer.parseInt(narr[1]);
            String[] arr = br.readLine().split(" ");
            StringBuilder sb = new StringBuilder();

            int m = n / g;
            m = m * g; //

            int o = n - m; //
            for(int i = 1; i <= n/g; i++){
                int mg = g*i;
                int x = g;
                while(x -- > 0){
                    sb.append(arr[mg-1]+" ");
                    mg--;
                }
            }
            int i=n-1;
            while(o-- > 0){
                sb.append(arr[i--] +" ");
            }
            System.out.println(sb);


        }
    }
}
