#include<bits/stdc++.h>
using namespace std;
int coin( int S[], int m, int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    int table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}

int main()
{
    int a[6] = {50,25,10,5,1};
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        cout << coin(a,5,n) << endl;


    }

    return 0;
}
