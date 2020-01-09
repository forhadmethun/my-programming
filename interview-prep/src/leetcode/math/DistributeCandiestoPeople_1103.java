package leetcode.math;

public class DistributeCandiestoPeople_1103 {
    public int[] distributeCandies(int candies, int num_people) {
        int[] out = new int[num_people];
        int i = 0;
        int index = 0;
        int count = 1;
        while(candies != 0){
            candies = candies - count;
            if(candies <= 0){
                candies = candies + count;
                out[index] += candies;
                break;
            }
            out[index] += count;
            index = (index + 1) % num_people;
            count++;
        }
        return out;
    }
}
