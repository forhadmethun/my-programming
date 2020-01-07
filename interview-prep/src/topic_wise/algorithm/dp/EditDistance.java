package topic_wise.algorithm.dp;
/*
    find minimum number of edit required to change 's1' to 's2'

    // s1 - > first string
    // s2 - > second string
    // m - > initial length of s1
    // n -> initial length of s2

                          { 0  while m == 0 && n == 0
    ed(s1, s2, m, n) =    { n  while m = 0
                          { m  while n = 0
                          {   editDistance(s1, s2, m - 1, n - 1)   while s1[m-1] == s2[n-1]
                          {
                              min ( ed(s1, s2, m, n- 1),  // insert into s1
                                    ed(s1, s2, m - 1, n), // delete from s1
                                    ed(s1, s2, m - 1, n - 1) // replace any chr of s1 with s2's
                              )
 */
public class EditDistance {
    public static void main(String[] args) {
        String s1 = "sunday";
        String s2 = "Saturday";
        int m = s1.length();
        int n = s2.length();
        System.out.println(editDistanceRec(s1, s2, m, n));
        System.out.println(editDistanceIter(s1, s2, m, n));
    }

    private static int editDistanceIter(String s1, String s2, int m, int n) {
        int[][]  T = new int[m+1][n+1];
        for(int i = 0 ; i <= m; i++){
            for(int j = 0; j <= n; j++){
                if( i == 0){
                    T[i][j] = j;
                }
                else if(j == 0){
                    T[i][j] = i;
                }
                else if(s1.charAt(i-1) == s2.charAt(j-1)){
                    T[i][j] = T[i-1][j-1];
                }
                else{
                    T[i][j] = 1 + min(
                            T[i][j-1],
                            T[i-1][j],
                            T[i-1][j-1]
                    );
                }
            }
        }
        return T[m][n];
    }

    private static int editDistanceRec(String s1, String s2, int m, int n) {
//        if(m == 0 && n == 0 )return 0;
        if(m == 0) return n;
        if(n == 0) return m;
        if(s1.charAt(m-1) == s2.charAt(n-1)) return editDistanceRec(s1, s2, m - 1, n - 1);
        return 1 + min(
          editDistanceRec(s1, s2, m, n-1),
          editDistanceRec(s1, s2, m - 1, n),
          editDistanceRec(s1, s2, m - 1, n - 1)
        );
    }
    private static int min(int a, int b, int c){
        return Math.min(a,(Math.min(b,c)));
    }
}
