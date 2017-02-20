#include<iostream>
#include<stdio.h>
using namespace std;
int gd(int a,int b)
{
    if(b==0)return a;
    else return gd(b,a%b);
}
int main()
{
    long long i,j,G,N;
    while(cin>>N)
    {
        if(N==0)break;
        G=0;
for(i=1;i<N;i++){
for(j=i+1;j<=N;j++)
{
    G+=gd(i,j);
}
    }
    cout<<G<<endl;
    }


    return 0;
}
