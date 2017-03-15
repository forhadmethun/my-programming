#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int prime(long long  x)
{
    long long  j,i,l=1;
    j=sqrt(x);
    for(i=2;i<=j;i++){
        if(x%i==0){
            l=0;
            break;
        }
    }
    if(l==1)return 1;
    else return 0;

}
int main()
{
    char a[20];
    while(scanf("%s",a)!=EOF)
    {
        //printf("%d\n",a[0]);
        long long  i,j,k,s=0,m,n;
        k=strlen(a);

        for(i=0;i<k;i++)
        {
            if(a[i]>=65 &&a[i]<97){
                m=a[i]-65+27;
                s+=m;
            }
            if(a[i]>=97 && a[i]<=122){
                m=a[i]-97+1;
                s+=m;
            }


            //cout<<s;

        }
        //cout<<s;
        if(prime(s)==1)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }


}
