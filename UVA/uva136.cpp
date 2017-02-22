#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int ara[1501];
    ara[0]=1;
    long long a,b,c,x,y,z,i;
    ara[1]=x=y=z=1;
    for(i=2;i<=1500;i++)
    {

        a=2*ara[x];
        b=3*ara[y];
        c=5*ara[z];
        if(a<b && a<c){ara[i]=a;x++;}
        else if(b<a && b<c){ara[i]=b;y++;}
        else if(c<a && c<b){ara[i]=c;z++;}
        else if(a==b){i--;y++;}
        else if(a==c){i--;z++;}
        else if(b==c){i--;z++;}
        cout<<ara[i]<<" ";



    }
    //cout<<ara[1498];
    printf("The 1500'th ugly number is %d.\n",ara[1500]);


    return 0;
}
