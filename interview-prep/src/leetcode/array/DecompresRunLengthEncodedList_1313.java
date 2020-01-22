package leetcode.array;
import java.util.*;
public class DecompresRunLengthEncodedList_1313 {
    public int[] decompressRLElist(int[] nums) {
        List<Integer> out = new ArrayList<>();
        for(int i = 0; 2 * i + 1 < nums.length; i++){
            int a = nums[2 * i];
            int b = nums[2 * i + 1];
            while(a-- > 0){
                out.add(b);
            }
        }
        int[] o = new int[out.size()];
        int i = 0;
        for(int ou : out){
            o[i++] = ou;
        }
        return o;
    }
}
