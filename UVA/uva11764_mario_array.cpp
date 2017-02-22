#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[50],i,j,l,h,n,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        h=0;l=0;

        for(j=0;j<m;j++)cin>>a[j];
        for(j=0;j<m-1;j++)
        {
            if(a[j]>a[j+1])l++;
            else if(a[j]<a[j+1])h++;
        }
        printf("Case %d: %d %d\n",i,h,l);
    }


    return 0;
}
