package leetcode.math;


public class DIStringMatch_942 {
    public int[] diStringMatch(String S) {
        int[] out = new int[S.length() + 1];
        int I = 0;
        int D = S.length();
        int idx = 0;

        for(int i = 0; i < S.length(); i++){
            if(S.charAt(i) == 'I'){
                out[idx++] = I++;
            }else{
                out[idx++] = D--;
            }
        }
        if(S.charAt(S.length() - 1) == 'D'){
            out[idx--] = D--;
        }
        else{
            out[idx++] = I++;
        }
        return out;
    }

    public static void main(String[] args) {
        int[] out = new DIStringMatch_942().diStringMatch("IDID");
        int i = 0;

    }
}

