package dcp;

import java.util.Arrays;

//https://mail.google.com/mail/u/0/#label/Daily+Coding+Problem/FMfcgxwJXLhBCzLwghXlXrBbWpQjCgjs
public class DCP377 {
    public static void main(String[] args) {
        int[] arr = { -1, 5, 13, 8, 2, 3, 3, 1 };
        int k = 4;
        printMedianOfEachWindowSizeK(arr, k);
    }

    static void printMedianOfEachWindowSizeK(int[] arr, int k) {
        for (int i = k; i <= arr.length; i++) {
            int[] tempArr = Arrays.copyOfRange(arr, i - k, i);
            int[] copyOfTempArray = Arrays.copyOf(tempArr, tempArr.length);
            Arrays.sort(copyOfTempArray);
            int middleIndex = k / 2 - 1;
            if (k % 2 == 0) {
                int median = (copyOfTempArray[middleIndex] + copyOfTempArray[middleIndex + 1]) / 2;
                System.out.printf("%d <- median of %s\n", median, Arrays.toString(tempArr));
            } else {
                int median = copyOfTempArray[middleIndex];
                System.out.printf("%d <- median of %s\n", median, Arrays.toString(tempArr));
            }
        }
    }

}