

#include<stdio.h>
#include<algorithm>

using namespace std;
long int a[2000005],i,n;

int main()
{
    while (scanf("%ld",&n)==1)
    {
        if (n==0)
        break;

        for (i=0;i<n;i++)
        scanf("%ld",&a[i]);

        sort(a,a+i);

        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
            printf(" ");
        }
        printf("\n");
#include<iostream>
#include<stdio.h>>
using namespace std;
int main()
{
    char a[50];
    while(gets(a))
    {
       puts(a);
    }




    return 0;
}
    }
    return 0;
}
