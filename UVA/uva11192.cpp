#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    char a[101];
    int n,i,j,k,l,m,x,q;
    while(1)
    {q=0;
    while(cin>>n)
    {
        if(n==0)
        {
            q=1;break;
        }
        gets(a);
        k=strlen(a);
       x=k/n;
       //cout<<x;
       l=0;
       m=n;
       for(i=1;i<=x;i++)
       {
           for(j=n;j>l;j--)
           {
               ///cout<<"j:"<<j<<"="<<a[j]<<endl;
               cout<<a[j];
           }
           l=j+m;
           n=n+m;
           ///cout<<"i:"<<i<<endl;
       }}
       if(q==1)break;}

       cout<<endl;




    return 0;
}
