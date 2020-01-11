package leetcode.string;

public class RobotReturntoOrigin_657 {
    public boolean judgeCircle(String moves) {
        int r = 0, c = 0;
        for(int i = 0; i < moves.length(); i++){
            if(moves.charAt(i) == 'U'){
                r -= 1;
            }
            else if(moves.charAt(i) == 'D'){
                r += 1;
            }
            else if(moves.charAt(i) == 'L'){
                c -= 1;
            }
            else if(moves.charAt(i) == 'R'){
                c += 1;
            }
        }
        return r == 0 && c == 0;
    }
}
