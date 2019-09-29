#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    while(gets(a))
    {
        int i,j,k=0,l,m;l=strlen(a);
        a[l]='\r';l++;
        for(i=0;i<l;i++)
        {
            if(a[i]==' '|| a[i]=='\r')
            {
                m=k;
                for(j=i-1;j>=m;j--)
                {
                    b[k]=a[j];
                    k++;

                }
                if(a[i]==' ')
                {
                    b[k]=' ';
                    k++;
                }
                //else if(a[i]=='.'){b[k]='.';k++;}
            }
        }
        for(j=0;j<l-1;j++)cout<<b[j];
        cout<<endl;
    }


    return 0;
}
