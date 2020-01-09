package leetcode.math;

public class ValidBoomerang_1037 {
    public boolean isBoomerang(int[][] points) {
        if(isDistinct(points) && !isInStraightLine(points))return true;
        return false;
    }
    boolean isDistinct(int[][] points){
        for(int i = 0; i < points.length; i++){
            for(int j = i + 1; j < points.length; j++){
                int[] p1 = points[i];
                int[] p2 = points[j];
                if(p1[0] == p2[0] && p1[1] == p2[1]){
                    return false;
                }
            }
        }
        return true;
    }
    boolean isInStraightLine(int[][] points){
        int dy = points[1][1] - points[0][1];
        int dx = points[1][0] - points[0][0];

        int dy1 = points[2][1] - points[1][1];
        int dx1 = points[2][0] - points[1][0];

        return dy * dx1 == dx * dy1;
    }
}
