#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j,k,l;char b,c;

    while(1)
    {
        cin>>n;

        if(n==0)break;
        getche();
        //for(i=0;i!='\0';i++)scanf("%c",&a[i]);
        char a[101];
        gets(a);
        l=strlen(a);
        k=l/n;
        //cout<<k<<endl;
        b=n;
        c=0;
        //for(i=n;i>0;i--)cout<<a[i];
        cout<<endl;
        for(i=1;i<=k;i++)
        {
            for(j=b;j>c;j--)cout<<a[j];
             c+=n;
            b+=n;

        }
        cout<<endl;

    }


    return 0;
}
