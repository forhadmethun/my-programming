#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,n,s,l;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        if(s!=0)
        l=sqrt(((s-a)*(s-b)*(s-c))/s);
        else l=0;
        //cout<<l<<endl;
        printf("The radius of the round table is: %.3lf\n",l);

    }


    return 0;
}
