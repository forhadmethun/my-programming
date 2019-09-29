#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,a[100],l,m,n,aa,s,ss;
    cin>>aa;
    while(aa--){
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=0;
    for(i=n-1;i>=0;i--){
            m=0;
        for(j=i-1;j>=0;j--)
        {
            //l=a[m];
            if(a[m]>a[m+1]){
                l=a[m];
                a[m]=a[m+1];
                a[m+1]=l;
                s++;
            }
            m++;

        }
    }
    /*for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }*/
    //cout<<s<<endl;
    printf("Optimal train swapping takes %d swaps.\n",s);
    }


    return 0;
}
