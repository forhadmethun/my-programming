import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?track=sp-arrays-and-searching
public class RotatingAnArray2 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while( t-- > 0 ){
            String[] n_shift = br.readLine().split(" "); // input numbers
            int n = Integer.parseInt(n_shift[0]);
            int shift = Integer.parseInt(n_shift[1]);

            String[] inputArray = br.readLine().split(" ");
            ArrayList<Integer> list = new ArrayList();
            for(int i=0; i<n ; i++){
                list.add(Integer.parseInt(inputArray[i]));
            }

//            int shift = Integer.parseInt(br.readLine());
            StringBuilder sb = new StringBuilder();

            for(int i=shift; i < n; i++){
                sb.append(list.get(i)+ " ");
//                System.out.printf("%d ",list.get(i));
            }
            for(int i = 0; i < shift; i++){
                sb.append(list.get(i)+ " ");

//                System.out.printf("%d ", list.get(i));
            }
//            sb.append("\n");
            System.out.println(sb);
        }

    }
}
