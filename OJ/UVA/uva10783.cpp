
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,a,b,s;
    cin>>n;
    for(j=1;j<=n;j++)
    {

    cin>>a>>b;


    s=0;

    for(i=a;i<=b;i++)
    {
        if((i%2)!=0){
                s+=i;
                //cout<<s<<endl;
        }

    }
    printf("Case %d: %d\n",j,s);
}


    return 0;
}
