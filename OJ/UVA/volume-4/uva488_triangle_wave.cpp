#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,a,b,k,l,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        for(i=0;i<b;i++)
        {
            for(j=1;j<=a;j++)
            {
                for(k=1;k<=j;k++)
                {
                    cout<<j;
                }

                cout<<endl;
            }
            for(j=a-1;j>=1;j--)
            {
                for(k=1;k<=j;k++)
                {
                    cout<<j;
                }
                cout<<endl;
            }
            if(!(n==0 && i==b-1))cout<<endl;
        }
    }


    return 0;
}
