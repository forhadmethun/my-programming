#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{

    int i,j,mm,ff,n,l;
    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {
        mm=ff=0;
        char a[1000];
       gets(a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='M')mm++;
            else if(a[i]=='F')ff++;
        }
        if(l!=2 && mm==ff)printf("LOOP\n");
        else printf("NO LOOP\n");
        /*
        if( sum==0 && len!=2)
printf("LOOP\n");
else
printf("NO LOOP\n");

        */

    }




    return 0;
}
