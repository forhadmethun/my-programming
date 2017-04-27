#include<bits/stdc++.h>
using namespace std;
int solve(string A) {
    int n = (int)A.size();
    int total[n][n],l,h,gap;
    memset(total,0,sizeof(total));
    for(gap=1;gap<n;gap++){
        for(l=0,h=gap;h<n;l++,h++){
            total[l][h] = (A[l] == A[h]) ? total[l+1][h-1] : (min(total[l][h-1],total[l+1][h] ) + 1) ;
        }
    }
    return total[0][n-1];
}

int findMinInsertionsDP(char str[], int n)
{
    // Create a table of size n*n. table[i][j] will store
    // minumum number of insertions needed to convert str[i..j]
    // to a palindrome.
    int table[n][n], l, h, gap;

    // Initialize all table entries as 0
    memset(table, 0, sizeof(table));

    // Fill the table
    for (gap = 1; gap < n; ++gap)
        for (l = 0, h = gap; h < n; ++l, ++h)
            table[l][h] = (str[l] == str[h])? table[l+1][h-1] :
                          (min(table[l][h-1], table[l+1][h]) + 1);

    // Return minimum number of insertions for str[0..n-1]
    return table[0][n-1];
}
int max(int a, int b)
{   return (a > b)? a : b; }

/* Returns length of LCS for X[0..m-1], Y[0..n-1].
   See http://goo.gl/bHQVP for details of this function */
int lcs( char *X, char *Y, int m, int n )
{
    int L[n+1][n+1];
    int i, j;

    /* Following steps build L[m+1][n+1] in bottom up fashion. Note
       that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;

            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
    return L[m][n];
}

// LCS based function to find minimum number of insersions
int findMinInsertionsLCS(char str[], int n)
{
    // Creata another string to store reverse of 'str'
    char rev[n+1];
    strcpy(rev, str);
    strrev(rev);

    // The output is length of string minus length of lcs of
    // str and it reverse
    return (n - lcs(str, rev, n, n));
}


int main(){
    string str = "hqghumeaylnlfdxfi";
//    string str = "ABC";
    cout<< findMinInsertionsLCS("hqghumeaylnlfdxfi",17) << endl;
    return 0;
}