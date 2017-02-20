#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int leap(long long  x)
{
    if((x%4==0 && x%100 !=0)||(x%400==0)&& (x%4==0))return 1;
    else return 0;
}
int hulu(long long x)
{
    if(x%15==0)return 1;
    else return 0;
}
int bulu(long long x)
{
    if(leap(x)==1 && x%55==0)return 1;
    else return 0;
}
int main()
{
    char  n[1000005],i;int x=0,l,y=0;
    while(scanf("%s",n)!=EOF)
    {
        l=strlen(n);
        if(y)printf("\n");
        y=1;

        x=0;
        for(i=0;n[i]!='\0';i++)
        {
            x=10*x+n[i]-'0';
        }
        //if(l==1 && x=='\n)break;
        //cout<<x<<endl;
        //n=x;


    //if(n%15==0)i=2;
    if(leap(x)==1){
        printf("This is leap year.\n");
    }
    if(hulu(x)==1)
    {
        printf("This is huluculu festival year.\n");
    }
    if(bulu(x)==1)
    {
        printf("This is bulukulu festival year.\n");
    }
    if(leap(x)==0 && hulu(x)==0 && bulu(x)==0 ) printf("This is an ordinary year.\n");
    //printf("\n");
    }


    return 0;
}
