#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,a[1000],l,m,n,x;
    while(cin>>n){
            x=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--){
            m=0;
        for(j=i-1;j>=0;j--)


        {
            //l=a[m];
            if(a[m]>a[m+1]){
                l=a[m];
                a[m]=a[m+1];
                a[m+1]=l;
                x++;
            }
            m++;

        }
    }
    /*for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }*/
    //cout<<x<<endl;
    printf("Minimum exchange operations : %d\n",x);
    }


    return 0;
}
