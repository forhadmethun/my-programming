//unsolved........ pore kormu :( etoo jhamela ka :(

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long  a,b,c,n,i,ii=0;
    //a=999999999999999999;
    while(cin>>a)
    {
        ii++;
        if(a<100)printf("%lld. %lld\n",ii,a);
        else if(a<1000&&a>=100)
        {
            printf("%lld. %lld shata %lld\n",ii,(a/100),((a)%100));
        }
        else if(a>=1000&&a<100000)printf("%lld. %lld hajar %lld shata %lld\n",ii,a/1000,(a%1000)/100,(a%1000)%100);
        else if(a>=100000&&)


    }
    //cout<<a<<endl;


    return 0;
}
