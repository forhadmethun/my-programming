#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,a,b,c,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        /*if(a+b<=c || a+c<=b || b+c<=a)printf("Case %d: Invalid\n",i);
        else if(a==b && b==c)printf("Case %d: Equilateral\n",i);
        else if(a==b || a==c || b==c)printf("Case %d: Isosceles\n",i);
        else if(a!=b ||a!=c ||b!=c)printf("Case %d: Scalene\n",i);*/
             //scanf("%ld%ld%ld",&a,&b,&c);
 if((a+b)<=c || (b+c)<=a || (c+a)<=b)
 printf("Case %ld: Invalid\n",i);
 else if(a<=0 || b<=0 || c<=0)
 printf("Case %ld: Invalid\n",i);
 else if(a==b && b==c)
 printf("Case %ld: Equilateral\n",i);
 else if(a==b || b==c || c==a)
 printf("Case %ld: Isosceles\n",i);
 else
 printf("Case %ld: Scalene\n",i);
    }



    return 0;
}
