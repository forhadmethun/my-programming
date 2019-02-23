import java.util.*;
import java.io.*;

//https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?track=sp-arrays-and-searching
public class LeadersInAnArray {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while( t-- > 0 ){
            int n = Integer.parseInt(br.readLine());
            String[] in = br.readLine().split(" ");
            boolean[] isLeader = new boolean[n];
            StringBuilder sb = new StringBuilder();
//            String out = in[n-1] + " ";0
//            sb.append(in[n-1] + " ");
            isLeader[n-1] = true;
            int lastMax = Integer.parseInt(in[n-1]);
            for(int i= n-2;i>=0;i--){
                if(Integer.parseInt(in[i]) >= lastMax){
//                    out =in[i] + " " + out;
//                    sb.append(Integer.parseInt(in[i])+ " ");
                    isLeader[i] = true;
                    lastMax = Integer.parseInt(in[i]);
                }
            }
            for(int i=0;i<n;i++){
                if(isLeader[i]){
                    sb.append(in[i] + " ");
                }
            }

            System.out.println(sb);
//            System.out.println(sb.reverse());
        }
    }
}
