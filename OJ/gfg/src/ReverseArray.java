import java.util.*;
import java.io.*;

public class ReverseArray {
    public static void main(String[] args) throws Exception{
        int t;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        t = Integer.parseInt(br.readLine());
        while( t--  > 0 ){
            int n = Integer.parseInt(br.readLine());
            String[] in = br.readLine().split(" ");
            StringBuffer sb = new StringBuffer();
            for(int i =n-1 ; i >=0; i--){

                sb.append(in[i]+" " );
//                if(i!=n-1)sb.append(" ");
            }
            System.out.println(sb);
        }


    }
}
