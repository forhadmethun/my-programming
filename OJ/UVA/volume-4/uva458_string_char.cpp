#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[1000];
    while(gets(a))
    {
        int l,i;
        l=strlen(a);
        for(i=0;i<l;i++)//cout<<a[i]-7;
        //cout<<endl;
        printf("%c",a[i]-7);
        cout<<endl;
    }


    return 0;
}
