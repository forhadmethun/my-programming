#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10];
    gets(a);
    int aa=1;
    while(a[0]!='*'){
        //i++;
        if(a[0]=='H'&&a[1]=='a'&&a[2]=='j'&&a[3]=='j')printf("Case %i: Hajj-e-Akbar\n",aa);
        else if(a[0]=='U'&& a[1]=='m'&&a[2]=='r'&&a[3]=='a'&&a[4]=='h')printf("Case %i: Hajj-e-Asghar\n",aa);
        aa++;


        gets(a);
    }
    //cout<<i;

    return 0;
}
