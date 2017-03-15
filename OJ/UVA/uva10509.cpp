#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
int main()
{
    double b,c,n,d,e;
    int a,i,j,s,m;
    while(cin>>n)

    {
    i=int(n);

    if(i==0)break;
    /*d=1.0/3;
    e=floor(pow(n,d));
    cout<<e;*/
    for(d=1;d<n;d++)
    if(d*d*d>=n)break;
    cout<<"d"<<d<<endl;


    //cout<<d<<endl;
    b=((n-d*d*d)/(3.0*d*d));
    cout<<b<<endl;
    c=d+b;

    printf("%.4lf\n",c);
    }


    return 0;
}
