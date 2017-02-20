#include<iostream>
#include<stdio.h>
using  namespace std;
main()
{
long long a,b,c,s=1,n,i=0,aa;
//while(scanf("%d",&a))
while(cin>>a>>n)
{s=1;i++;aa=a;
if(a==-1 || n==-1)break;
 while(a>1)
            {


                if(a%2!=0)
                {
                a=a*3+1;
               // printf("%d ",a);
                }
                else {
                a=a/2;
              //  printf("%d ",a);


            }
            if(a>n)break;
            s++;
                }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,aa,n,s);
}
}
