package leetcode.stack;
import java.util.*;
public class NextGreaterElementI_496 {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Map<Integer, Integer> map = new HashMap<>();
        Stack<Integer> stack = new Stack<>();
        for(int num: nums2){
            if(!stack.isEmpty()){
                while(!stack.isEmpty() && num > stack.peek()){
                    map.put(stack.peek(), num);
                    stack.pop();
                }
                stack.push(num);
            }
            else{
                stack.push(num);
            }
        }
        while(!stack.isEmpty()){
            map.put(stack.peek(), -1);
            stack.pop();

        }
        int[] result = new int[nums1.length];
        int idx = 0;
        for(int num : nums1){
            result[idx++] = map.get(num);
        }
        return result;
    }
}
