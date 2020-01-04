package leetcode.array;
import java.util.*;
interface CustomFunction {
    // Returns positive integer f(x, y) for any given positive integer x and y.
    int f(int x, int y);
};
public class FindPositiveIntegerSolutionOfFuction_1237 {
    public List<List<Integer>> findSolution(CustomFunction customfunction, int z) {
        List<List<Integer>> output = new ArrayList<>();
        /*
        //working but inefficient
        for(int i = 1 ;i < 1000; i++){
            for(int j = 1; j < 1000; j++){
                if(customfunction.f(i,j) == z){
                    output.add(Arrays.asList(i,j));
                }
            }
        }
        */
        int i = 1, j = 1000;
        while(i <= 1000 && j >= 1){
            int v = customfunction.f(i,j);
            if( v > z){
                j--;
            }
            else if(v < z){
                i++;
            }
            else{
                output.add(Arrays.asList(i++,j++));
            }
        }
        return output;
    }
}
