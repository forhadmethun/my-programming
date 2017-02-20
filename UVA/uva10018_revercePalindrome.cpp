#include<iostream>
#include<stdio.h>

long long  rev(long long x)
{
    long long s=0,r;
    while(x!=0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;

    }
    return s;

}
using namespace std;
int main()
{
    long long a,s=0,i,n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        s=a;i=0;
        //cout<<rev(a)<<endl;
        while(a!=rev(a))
        {
            s+=rev(a);
            a=s;
            i++;

        }
        cout<<i<<" "<<a<<endl;
    }



    return 0;
}
