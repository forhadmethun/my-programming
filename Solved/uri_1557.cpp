#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        int m = 1, k = 1;
        for(int i=1; i<=n; i++)
        {
            k = k * 2;
            for(int j=1; j<=n; j++)
            {

                printf("%d",m);
                if( j < n) printf(" ");
                m = m*2;
            }
            m = k;
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
