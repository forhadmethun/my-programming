#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char h[100];int i=0;
    while(scanf("%s",h)!=EOF)
    {
        i++;
        if     (strcmp(h,"#")==0)break;
        else if(strcmp(h,"HELLO")==0)printf("Case %d: ENGLISH\n",i);
        else if(strcmp(h,"HOLA")==0)printf("Case %d: SPANISH\n",i);
        else if(strcmp(h,"HALLO")==0)printf("Case %d: GERMAN\n",i);
        else if(strcmp(h,"BONJOUR")==0)printf("Case %d: FRENCH\n",i);
        else if(strcmp(h,"CIAO")==0)printf("Case %d: ITALIAN\n",i);
        else if(strcmp(h,"ZDRAVSTVUJTE")==0)printf("Case %d: RUSSIAN\n",i);
        else    printf("Case %d: UNKNOWN\n",i);
    }



    return 0;
}
