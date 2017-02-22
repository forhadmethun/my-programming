#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){

    double a,b,c,d,r,pi,e;
    cin>>a;
    b=((6*a)/10);
    r=((2*a)/10);
    pi=acos(-1);
    d=pi*r*r;
    e=a*b-d;

    //cout<<d<<" "<<e;
    printf("%.2lf %.2lf\n",d,e);
    }


    return 0;
}
