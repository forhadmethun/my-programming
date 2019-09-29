#include<iostream>
#include<stdio.h>
#include<math.h>
int abs(int x,int y)
{
    if(x>y)return x-y;
    else return y-x;
}
using namespace std;
int main()
{

    int i,j,k,l,n,m,a[3000],b[3000],c[3000];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    //for(i=0;i<n;i++)cout<<a[i];
    for(j=0;j<n-1;j++){
        b[j]=abs(a[j+1],a[j]);
    }
    //for(i=0;i<n-1;i++)cout<<b[i]<<" ";
    for(j=0;j<n-2;j++){
        c[j]=abs(b[j+1],b[j]);
    }
    //cout<<"\n";
    //for(i=0;i<n-2;i++)cout<<c[i]<<" ";
    m=c[1];
    k=1;
    for(i=0;i<n-2;i++)
    {
        if(m!=c[i])k=0;
    }
    if(k==1)printf("Jolly\n");
    else printf("Not jolly\n");

    return 0;
}
