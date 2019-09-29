#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[1000];
    int i,j,k=1,l,n,s=0;
    while(gets(a)){
        //cout<<a<<endl;
        n=0;k=1;
        l=strlen(a);n=1;
        for(i=0;i<l;i++)
        {
            //n=1;
            if((a[i]>='A'&&a[i]<='Z')|| (a[i]>='a' && a[i]<='z'))

            {
                //n=1;
                if(n==1)
                {
                    s++;
                    n=2;
                }


            }
            else{
                n=1;
            }

        }
        cout<<s<<endl;
        s=0;
    }


    return 0;
}


