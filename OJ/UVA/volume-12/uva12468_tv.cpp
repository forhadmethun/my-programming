#include<iostream>
#include<stdio.h>
int m(int x,int y)
{
    if(x>y)return x-y;
    else return y-x;
}
using namespace std;
int main()
{
    int a,b,n,i,j;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)break;
        else if(m(a,b)<=50)cout<<m(a,b)<<endl;
        else cout<<100-m(a,b)<<endl;


    }


    return 0;
}
