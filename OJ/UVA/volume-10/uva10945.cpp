#include<iostream>
#include<stdio.h>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    char c[50],b[50];
    int i=0;
    scanf("%c",&c[i]);
    //a=getche();
    while(c[i]!='\r')
    {
        i++;
        //printf("hellow");
        //c[i]=getche();
        scanf("%c",&c[i]);
        printf("\n\n\t\t\t%c\n\n",&c[i]);
    }
    //printf("%s",c);



    return 0;
}
