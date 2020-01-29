package leetcode.array;
import java.util.*; 
public class FizzBuzz_412 {
    public List<String> fizzBuzz(int n) {
        List<String> result = new ArrayList<>();
        int x = 3;
        int y = 5;
        for(int i = 1; i <= n; i++){
            if( i%x == 0 && i %y == 0 ){
                result.add("FizzBuzz");
            }
            else if(i % x == 0){
                result.add("Fizz");
            }
            else if(i % y == 0){
                result.add("Buzz");
            }
            else{
                result.add(i+"");
            }
        }
        return result;
    }
}
