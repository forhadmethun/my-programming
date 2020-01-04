package leetcode.math;

public class CheckIfStraightLine_1232 {
    public boolean checkStraightLine(int[][] coordinates) {
        int i = 1;
        int dx = coordinates[i][0] - coordinates[i-1][0];
        int dy = coordinates[i][1] - coordinates[i-1][1];
        for(i = 1; i < coordinates.length; i++){
            if(dx*(coordinates[i][1] - coordinates[i-1][1])!= dy*(coordinates[i][0] - coordinates[i-1][0]) ){
                return  false;
            }
        }
        return true;
    }
}
