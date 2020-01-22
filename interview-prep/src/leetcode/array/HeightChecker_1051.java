package leetcode.array;

public class HeightChecker_1051 {
    public int heightChecker(int[] heights) {
        int[] out = new int[101];
        /*
        for(int i = 0; i < heights.length; i++){
            out[i] = heights[i];
        }
        Arrays.sort(out);
        int diff = 0;
        for(int i = 0; i < heights.length; i++){
            if(out[i] != heights[i])diff++;
        }
        */
        for(int i = 0; i <  heights.length; i++){
            out[heights[i]]+=1;
        }
        int diff = 0;
        int result = 0;
        for(int i = 0; i < heights.length; i++){
            while(out[diff] == 0){
                diff++;
            }
            if(diff != heights[i]){
                result++;
            }
            out[diff]-=1;
        }



        return result ;
    }
}
