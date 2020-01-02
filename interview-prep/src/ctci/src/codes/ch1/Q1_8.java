package codes.ch1;
import java.util.Scanner;
import java.nio.file.Paths;
import java.io.FileReader;
import java.util.List;
import java.util.ArrayList;

class Q1_8{
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new FileReader(Paths.get("").toAbsolutePath()+"/src/codes/ch1/Q1_8.txt"));
        while (sc.hasNext()) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            int[][] inputMatrix = new int[m][n];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    inputMatrix[i][j] = sc.nextInt();
                }
            }
            List<Pair> indexPairs = new ArrayList<Pair>();
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(inputMatrix[i][j] ==0 ){
                        Pair pair = new Pair(i,j);
                        indexPairs.add(pair);

                    }
                }
            }
            indexPairs.stream().forEach(i -> {
                fillWithZero(inputMatrix,m,n,i);
            });

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    System.out.printf(" %d",inputMatrix[i][j]);
                }
                System.out.println();
            }

        }

    }
    public static void fillWithZero(int[][] matrix,int m, int n, Pair pair){
        for(int i=0;i<m;i++){
            matrix[i][pair.second] = 0;
        }
        for(int i=0;i<n;i++){
            matrix[pair.first][i] = 0;
        }
    }
    static class Pair{
        public int first;
        public int second;
        Pair(int first,int second){
            this.first = first;
            this.second = second;
        }
    }
}