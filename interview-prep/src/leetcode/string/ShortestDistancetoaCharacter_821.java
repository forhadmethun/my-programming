package leetcode.string;

public class ShortestDistancetoaCharacter_821 {
    public int[] shortestToChar(String S, char C) {
        int[] result = new int[S.length()];
        int idx = 0;

        for(int i = 0; i < S.length(); i++){
            int leftCount = 0;
            boolean leftFound = false;
            for(int l = i; l >=0; l--){

                if(S.charAt(l) == C){
                    leftFound = true;
                    break;
                }
                leftCount++;
            }
            int rightCount = 0;
            boolean rightFound = false;
            for(int r = i; r < S.length(); r++){

                if(S.charAt(r) == C){
                    rightFound = true;
                    break;
                }
                rightCount++;
            }
            int ans = 0;
            if(leftFound && rightFound){
                ans = Math.min(leftCount, rightCount);
            }
            else if(leftFound){
                ans = leftCount;
            }
            else{
                ans = rightCount;
            }
            result[idx++] = ans;
        }
        return result;
    }
}
