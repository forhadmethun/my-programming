package leetcode.array;

public class ReplaceWithRightGreatestElement_1299 {
    public int[] replaceElements(int[] arr) {
        int out[] = new int[arr.length];
        out[arr.length-1] = -1;
        int k = arr.length - 1;
        out[k--] = -1;
        int max = Integer.MIN_VALUE;
        for(int i = arr.length -2; i >= 0; i--){
            if(arr[i+1]> max){
                max = arr[i+1];
            }
            //System.out.println(i + " - " + max);
            out[k--] = max;
        }
        return out;
    }
}
