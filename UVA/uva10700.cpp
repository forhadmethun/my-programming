//logic ashe nii :(

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,n,j,k,s=0;
    char a[30],b[30];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        gets(a);
        k=strlen(a);
        for(j=0;j<k;j++)
        {

            s+=a[i];

        }
        }
        cout<<s;


    }


    return 0;
}
