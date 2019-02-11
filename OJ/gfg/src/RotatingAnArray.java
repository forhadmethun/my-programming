import java.io.*;
import java.util.*;
//https://practice.geeksforgeeks.org/problems/reversal-algorithm/0/?track=sp-arrays-and-searching
public class RotatingAnArray {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while( t-- > 0 ){
            int n = Integer.parseInt(br.readLine());
            String[] inputArray = br.readLine().split(" ");
            ArrayList<Integer> list = new ArrayList();
            for(int i=0; i<n ; i++){
                list.add(Integer.parseInt(inputArray[i]));
            }

            int shift = Integer.parseInt(br.readLine());
            for(int i=shift; i < n; i++){
                System.out.printf("%d ",list.get(i));
            }
            for(int i = 0; i < shift; i++){
                System.out.printf("%d ", list.get(i));
            }
            System.out.println();
        }

    }
}
