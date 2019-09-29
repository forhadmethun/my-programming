#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int am,b;
    cin>>am;
    while(am)
    {
        char a[1000];
        //gets(a);

        scanf("%s",a);
        int m1=0,a3=0,r2=0,g1=0,i1=0,t1=0,i,j,s=0;
        j=strlen(a);
        for(i=0;i<j;i++)
        {
            if(a[i]=='M')m1++;
            else if(a[i]=='A')a3++;
            else if(a[i]=='R')r2++;
            else if(a[i]=='G')g1++;
            else if(a[i]=='I')i1++;
            else if(a[i]=='T')t1++;
        }
        //cout<<"m:"<<m1<<" a:"<<a3<<" r:"<<r2<<" g:"<<g1<<" i:"<<i1<<" t:"<<t1<<endl;
        while(m1>=1 && a3>=3 &&r2>=2 &&g1>=1 &&t1>=1)
        {
            s++;
            m1--;
            a3-=3;
            r2-=2;
            g1--;
            i1--;
            t1--;
        }
        cout<<s<<endl;
        am--;

    }




    return 0;
}
