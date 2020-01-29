package leetcode.array;

public class SumofEvenNumbersAfterQueries_985 {
    public int[] sumEvenAfterQueries(int[] A, int[][] queries) {
        int[] result = new int[queries.length];
        int idx = 0;

        int evenSum = 0;
        for(int a : A){
            if(a%2==0){
                evenSum+=a;
            }
        }

        for(int[] query : queries){
            if(A[query[1]] %2 == 0){
                evenSum -= A[query[1]];
            }
            A[query[1]]+=query[0];

            if(A[query[1]] %2 == 0){
                evenSum += A[query[1]];
            }
            result[idx++] = evenSum;
        }
        return result;
    }
}
