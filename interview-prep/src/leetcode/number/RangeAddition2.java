class RangeAddition2 {
    public int maxCount(int m, int n, int[][] ops) {
        /*
        int[][] mat = new int[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                mat[i][j] = 0;
            }
        }
        int opsRow = ops.length;
        for(int i = 0 ; i < opsRow; i++){
            int a = ops[i][0];
            int b = ops[i][1]; 
            performOps(mat, a, b);
        }
        int max = mat[0][0];
        int r = 0; 
        int c = 0; 
        for(r = 0; r < m; r++){
            if(mat[r][0]!=max)break;
        }
        for(c = 0; c < n; c++){
            if(mat[0][c]!=max)break;
        }
        return (r)*(c);
        */
        for(int[] op: ops){
            m = Math.min(m, op[0]);
            n = Math.min(n, op[1]);
        }
        return m * n; 
        
    }
    /*
    public void performOps(int[][]mat, int a, int b){
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                mat[i][j]+=1;
            }
        }
    }
    */
}