package leetcode.array;

public class DistanceBetweenBusStops_1184 {
    public int distanceBetweenBusStops(int[] distance, int start, int destination) {
        int forwardSum = 0;
        int backwardSum = 0;
        int min = Math.min(start, destination);
        int max = Math.max(start, destination);
        for(int i = min; i != max; i = (i + 1) % distance.length ){
            forwardSum += distance[i];
        }
        for(int i = max; i != min; i = (i + 1) % distance.length ){
            backwardSum += distance[i];
        }
        return Math.min(forwardSum, backwardSum);
    }
}
