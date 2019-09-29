#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793.
using namespace std;
int equx(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double x,y;
    x=(b1*c2-c1*b2)/(a1*b2-b1*a2);
   // y=(c1*a2-a1*c2)/(a1*b2-b1*a2);
    return x;
}

int equy(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double x,y;
   // x=(b1*c2-c1*b2)/(a1*b2-b1*a2);
    y=(c1*a2-a1*c2)/(a1*b2-b1*a2);
    return y;
}
int main()
{
    double x1,y1,x2,y2,x3,y3,j,n,ma,mb,x,y,aa,bb,cc,dd,ee,ff,gg,hh,ii;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)

    {
        ma=(y2-y1)/(x2-x1);
        mb=(y3-y2)/(x3-x2);
       // cout<<ma<<mb;
       // x=(((ma*mb*(y1-y3))+(mb*(x1+x2))-(ma*(x2+x3)))/(2*(mb-ma)));

       ma=-(1/ma);
       mb=-(1/mb);
       aa=(x1+x2)/2;
       bb=(y1+y2)/2;
       cc=(x1+x3)/2;
       dd=(y1+y3)/2;
       //cout<<ma<<" "<<mb<<" "<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<endl;

       ee=equx(ma,-1.0,(bb-ma*aa),mb,-1,(dd-mb*cc));
       ff=equy(ma,-1.0,(bb-ma*aa),mb,-1,(dd-mb*cc));
        ii=((x1-ee)*(x1-ee)+(y1-ff)*(y1-ff));
        cout<<ii;
      //cout<<ee<< " "<<ff<<endl;
        gg=sqrt(ii);
        hh=2.0*3.141592653589793*gg;

       // cout<<ee<<" "<<ff<<endl;
      // cout<<hh<<endl;


    }

    return 0;
}
