import java.util.*;
import java.io.*;
public class UnitDigitOfFactorial {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0 ){
            long n = Long.parseLong(br.readLine());
            long unit = 1;
            for(long i=1;i<=n;i++){
                unit = (unit * i) % 10;
                if( unit == 0 )break;
            }
            System.out.println(unit);
        }
    }
}
