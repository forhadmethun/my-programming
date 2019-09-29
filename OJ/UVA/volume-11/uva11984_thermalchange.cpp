#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i;double a,b,c,d;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        //cin>>a>>b;
        scanf("%lf%lf",&a,&b);
        d=(5.0*b)/9.0;
        //cout<<d<<endl;
        c=a+d;
        printf("Case %d: %.2lf\n",i,c);
    }



    return 0;
}
