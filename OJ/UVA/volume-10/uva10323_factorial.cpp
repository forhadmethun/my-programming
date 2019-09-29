#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long x,i,j,k;
    while(cin>>x)
    {
        i=1;
        if(x<=0)
        {
            if(x%2==0)printf("Underflow!\n");
            else printf("Overflow!\n");
        }
    else if((x>0&&x<8) || x>13)
    {
        if(x<8)printf("Underflow!\n");
        else printf("Overflow!\n");
    }
    else{

    for(j=1;j<=x;j++)i*=j;
    //cout<<j;

    /*if(i>6227020800)printf("Underflow!\n");
    else if(i<10000)*/
    printf("%lld\n",i);
    }

    }

    return 0;
}
