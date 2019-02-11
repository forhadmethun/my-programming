
import java.util.*;
import java.io.*;
//TODO TLE!!
public class ImmediateSmallerElement {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while( t-- > 0 ){
            int n = Integer.parseInt(br.readLine());
            List<Integer> arr = new ArrayList();
            String inputLine = br.readLine();
            String[] tokens = inputLine.split(" ");
            for(int i=1;i<=tokens.length;i++){
                arr.add(Integer.parseInt(tokens[i-1]));
            }
//            arr.forEach(l-> {
//                System.out.println(l);
//            });
            ArrayList<Integer> ans = new ArrayList<>();
            String out="";
            for(int i = 0; i < n; i++){
                if(i == n-1)out+="-1";
                else if( arr.get(i+1) < arr.get(i)){
                    ans.add(arr.get(i+1));
                    out+=arr.get(i+1) + " ";
                }else{
                    out+= "-1 ";

                }
            }
            System.out.println(out);
        }
    }
}
