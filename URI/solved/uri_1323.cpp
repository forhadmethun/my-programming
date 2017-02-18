#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n!=0){
        cout << n*(n+1)*(2*n+1)/6<<endl;
    }

    return 0;
}
