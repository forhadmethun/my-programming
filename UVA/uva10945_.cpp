#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char a[1000],b[1000]; int l,i,j=0,jam,m,lam=0,mal,v=1;
    while(gets(a))
    {
    if(!(strcmp(a,"DONE")))break;
    lam=0;v=1;j=0;
    l=strlen(a);
    for(i=0;a[i]!='\0';i++){
        if((a[i]>='A' && a[i]<='Z')||(a[i]>='a'&& a[i]<'z')){
            b[j]=toupper(a[i]);
                j++;
        }
    }
    for(i=0;i<j;i++){
        if(b[i]!=b[j-(i+1)]){

        v=0;
        printf("Uh oh..\n");

        break;
        }
    }
    if(v==1)printf("You won't be eaten!\n");
    }
    return 0;
}
