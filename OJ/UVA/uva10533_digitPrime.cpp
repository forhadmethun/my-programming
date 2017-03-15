/*#include<iostream>
#include<stdio.h>
#include<math.h>
long digsum(long x){
    int i=0;
    while(x){
        i+=(x%10);
        x=x/10;
    }
    return i;



}
long int prime(long x){
    long i,j=1,l;
    l=sqrt(x);
    for(i=2;i<=l;i++){
        if(x%i==0){
            j=0;
            break;
        }
    }
    if(j==1)return 1;
    else return 0;

    //for()

}
using namespace std;
int main()
{
    //long int x=1234567;
    //cout<<digsum(x)<<endl;
    long n,x,i,j,k,a,b,s;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        s=0;
        for(i=a;i<=b;i++){
            if(prime(i)==1 && prime(digsum(i))==1 )s++;//cout<<i<<endl;
        }
        cout<<s<<endl;

    }


    return 0;
}*/
#include<iostream>
#include<stdio.h>
#include<math.h>
long digsum(long x){
    int i=0;
    while(x){
        i+=(x%10);
        x=x/10;
    }
    return i;



}
long int prime(long x){
    long i,j=1,l;
    l=sqrt(x);
    for(i=2;i<=l;i++){
        if(x%i==0){
            j=0;
            break;
        }
    }
    if(j==1)return 1;
    else return 0;


}
using namespace std;
int main()
{
    long n,x,i,a,b,s;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        s=0;
        for(i=a;i<=b;i++){
            if(prime(i)==1 && prime(digsum(i))==1 )s++;
        }
        cout<<s<<endl;

    }


    return 0;
}

