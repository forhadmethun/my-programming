package leetcode.math;

public class LargestTriangleArea_812 {
    public double largestTriangleArea(int[][] points) {
        double area = 0;
        for(int [] p : points){
            for(int [] q: points){
                for(int []r : points){
                    area = Math.max(
                            area,
                            0.5 * ((p[0] * q[1] + q[0] * r[1] + r[0] * p[1])
                                    -(p[1] * q[0] + q[1] * r[0] + r[1] * p[0])
                            )
                    );
                }
            }
        }
        return area;
    }
}
