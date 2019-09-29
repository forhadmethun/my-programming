#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[15];
    long long s,l,i,j,k,p;
    while(gets(a)){
        l=strlen(a);
        if(l==1 && a[0]=='0')break;
        s=0;k=0;
        for(i=0;i<l;i++){
            s+=+a[i]-48;
        }
        p=0;
        while(s){
            p+=s%10;
            s=s/10;
        }
        if(p>=10){
           while(p){
            k+=p%10;
            p=p/10;
           }
        }
        else k=p;
        cout<<k<<endl;
    }
        return 0;
}
