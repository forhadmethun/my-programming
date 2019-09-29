#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long x;
    while(cin>>x && x>=0){

    char a[15],b;int i=0,l;
    if(x==0){
        cout<<0<<endl;
        continue;
    }

    long long y=0;
    while(x!=0)
    {
        y=(x%3);
        b=char(y);
        a[i]=b;
        i++;
        x=x/3;
     }
     for(int j=i-1;j>=0;j--)
     {
         cout<<int(a[j]);
     }
     cout<<endl;

     }


    return 0;
}

