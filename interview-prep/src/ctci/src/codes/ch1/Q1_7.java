package codes.ch1;

import java.io.FileReader;
import java.nio.file.Paths;
import java.util.Scanner;

class Q1_7 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath() + "/src/codes/ch1/Q1_7.txt"));
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int[][] inputMatrix = new int[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    inputMatrix[i][j] = sc.nextInt();
                }
            }
            rotateNinetyDegree(inputMatrix, n);

        }

    }
    //using extra space
    public static void rotateNinetyDegree(int[][] inputMatrix, int n) {
        int[][] resultMatrix = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultMatrix[i][j] = inputMatrix[n - j - 1][i];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.printf(" %d", resultMatrix[i][j]);
            }
            System.out.println();
        }
    }

    //without extra space
    //find transpose
    //reverse each row

}