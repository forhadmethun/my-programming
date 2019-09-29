#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,c,d=0,e;
    cin>>n;
    while(n--)
    {
        d++;
        cin>>a>>b>>c;
        if(a<=20&&b<=20&&c<=20)printf("Case %d: good\n",d);
        else printf("Case %d: bad\n",d);
    }


    return 0;
}
