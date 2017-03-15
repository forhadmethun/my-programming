#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
    double n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        printf("%.2lf %.2lf\n",(c-sqrt(a*a+b*b)),(c+sqrt(a*a+b*b)));
    }


    return 0;
}
