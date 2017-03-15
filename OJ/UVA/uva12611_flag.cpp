#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double n,i,a,b,c,d,x,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a=((45.0*x)/20.0);
        //http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
        c=((55.0*x)/20.0);
        b=(30.0*x)/20.0;
        printf("Case %.0lf:\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n",i,-a,b,c,b,c,-b,-a,-b);



    }


    return 0;
}
