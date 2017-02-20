#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long n,i,j,s;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        //cout<<"PERFECTION OUTPUT"<<endl;
        if(n==0){
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        s=0;
        for(i=1;i<=(n/2);i++){
            if(n%i==0)s+=i;
        }
        if(s==n)
        {
            printf("%5ld  PERFECT\n",n);
        }
        else if(s<n){
            printf("%5ld  DEFICIENT\n",n);
        }
        else if(s>n){
            printf("%5ld  ABUNDANT\n",n);
        }
    }
    return 0;
}
