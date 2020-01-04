package leetcode.array;

public class FindNUniqueSumUpToZero_1304 {
    public int[] sumZero(int n) {
        int[] out = new int[n];
        int k = 0;
        for (int i = 0; i < n / 2; i++) {
            out[k++] = i + 1;
            out[k++] = -(i + 1);
        }
        if (k % 2 == 1) {
            out[k++] = 0;
        }
        return out;
    }
}
