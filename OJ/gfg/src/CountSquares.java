import java.io.*;
import java.util.*;
public class CountSquares {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       int t =  Integer.parseInt(br.readLine());
//        Scanner sc = new Scanner(System.in);
//        int t = sc.nextInt();
        while(t-- > 0 ){
            long n =Integer.parseInt(br.readLine());
//            sc.nextLong();
            int count = 0;
            for(long i=1;i<n;i++){
                if(i*i < n)count++;
                else break;
            }
            System.out.println(count);

        }
    }

}
