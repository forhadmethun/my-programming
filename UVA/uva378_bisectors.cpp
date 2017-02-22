#include<iostream>
#include<stdio.h>
using namespace std;
double equx(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double x,y;
    x=(b1*c2-c1*b2)/(a1*b2-b1*a2);
    return x;
}

double equy(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double x,y;
    y=(c1*a2-a1*c2)/(a1*b2-b1*a2);
    return y;
}
int main()
{
    double n,x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d,ma,mb;
    cin>>n;
    printf("INTERSECTING LINES OUTPUT\n");
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        ma=(y2-y1)/(x2-x1);
        mb=(y4-y3)/(x4-x3);
        a=equx(ma,-1.0,(y1-ma*x1),mb,-1.0,(y3-mb*x3));
        b=equy(ma,-1.0,(y1-ma*x1),mb,-1.0,(y3-mb*x3));
       // cout<<a<<" "<<b<<endl;
        if(ma==-mb)printf("NONE\n");
        else if(ma==mb) printf("LINE\n");
        else printf("POINT %0.2lf %0.2lf\n",a,b);

    }


    return 0;
}
