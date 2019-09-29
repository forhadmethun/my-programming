#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a,b,s=0,l,d,ll,pi;
        pi=2*acos(0);
        cin>>d>>l;
        b=l/2;
        a=sqrt(pow((l/2),2)-pow((d/2),2));
        //cout<<pi*a*b<<endl;
        printf("%.3lf\n",pi*a*b);

    }


    return 0;
}
