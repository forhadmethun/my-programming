
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int N[10];
    N[0] = n;
    int k = N[0];
    printf("N[%d] = %d\n",0,N[0]);
    for(int i=1;i<10;i++){
        k = k*2;
        printf("N[%d] = %d\n",i,k);
    }

    return 0;
}
