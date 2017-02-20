#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char n[1005];
    while(scanf("%s",n) && !strcmp(n,"0"))
    {
        //cin>>n;
        if(n==0)break;
        else if(n%11==0)printf("%d is a multiple of 11.\n",n);
        else printf("%d is a not multiple of 11.\n",n);
    }


    return 0;
}
