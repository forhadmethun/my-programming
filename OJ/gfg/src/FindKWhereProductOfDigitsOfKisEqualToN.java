import java.util.*;
import java.io.*;
//TODO incomplete!!!
public class FindKWhereProductOfDigitsOfKisEqualToN {

    static void findSmallestNumbers(long n){
        long copy = n;
        List<Integer> unitFactors = new ArrayList();

        if(n==1){
            System.out.println(n);
            return;
        }
        while(n>1){
            if(!(n%2 == 0 || n %3 ==0 || n %5 == 0 || n%7 == 0))break;
            for(int i=9;i>1;i--){
                if(n%i == 0){
                    unitFactors.add(i);
                    n = n/i;
                }
            }
        }

        long num = 1;
        String ans = "";
        for(int i=unitFactors.size()-1;i>=0;i--){
            num = num * unitFactors.get(i);
            ans +=unitFactors.get(i);
        }
        if(num == copy){
            char tempArray[] = ans.toCharArray();
            Arrays.sort(tempArray);
            System.out.println(new String(tempArray));
        }
        else{
            System.out.println(-1);
        }
    }

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0) {
            long n = Long.parseLong(br.readLine());
            findSmallestNumbers(n);
        }
    }
}
