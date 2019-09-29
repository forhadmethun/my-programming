//not solved :(
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
long int j,k,a[2000005],l;
int main()
{
    //m,n,i;
    long i,m,n;
    while(cin>>n){
    if(n==0)break;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+i);

    /*for(i=n-1;i>=0;i--){
            m=0;
        for(j=i-1;j>=0;j--)
        {
            //l=a[m];
            if(a[m]>a[m+1]){
                l=a[m];
                a[m]=a[m+1];
                a[m+1]=l;
            }
            m++;

        }
    }*/
    for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
