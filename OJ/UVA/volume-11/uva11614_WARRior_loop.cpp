#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double equ(double a,double b,double c)
{
    return (-b+sqrt(b*b-4.0*a*c))/(2.0*a);

}
int main()
{
    double n,a,b;int k;
    cin>>n;
    while(n--)
    {
        cin>>a;
        //b=(-1.0+sqrt(1.0-8.0*a))/(2.0);
        /*b=floor(b);
        k=int(b);*/

        cout<<int(floor(equ(1.0,1.0,(-2.0*a))))<<endl;
        //cout<<b<<endl;

    }


    return 0;
}

