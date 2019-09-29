#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    //long long I;
    //while(I!=0)
    long long ara[100000],bra[100000];
    long long a,b,c,i=0,j,m=0,n;
    //while
    while((cin>>n))
    {
       // m=0;
       if(n==0)break;


    a=n/2;
    i=0;
    while(n){
        b=n%2;
        ara[i]=b;
        //printf("%d",ara[i]);
        i++;
        a=n/2;
        n=a;
        }
        m=0;

    for(j=0;j<i;j++){
        //printf("%d",ara[j]);
        if(ara[j]==1){
            m+=1;
        }
    }
    //printf("%d\n",m);

    printf("The parity of ");
    for(i=j-1;i>=0;i--)printf("%d",ara[i]);
    printf(" is %d (mod 2).\n",m);



    //m=0;
   }
    //m=0;



    return 0;
}
