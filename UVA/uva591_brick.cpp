#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int mod(int a,int b)
{
    if(a>b)return a-b;
    else return b-a;
}
int main()
{
    int n,i,ara[100],m=0;
    while(cin>>n)
    {
        m++;
        if(n==0)break;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int x=0;
        for(i=0;i<n;i++){
            x+=ara[i];
        }
        x=x/n;
        //cout<<x;
        int s=0,y=0;
        for(i=0;i<n;i++)
        {
            //s+=
            //bra[i]=mod(x,ara[i]);
            y+=mod(x,ara[i]);

        }
        y=y/2;
        //cout<<y;
        printf("Set #%d\nThe minimum number of moves is %d.\n",m,y);


    }



    return 0;
}
