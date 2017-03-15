#include<iostream>
using namespace std;
int main()
{
    long long n,s=0,i;
    while(cin>>n)
    {
        s=0;
        if(n==0)break;
        for(i=1;i<=n;i++)s+=i*i;
        cout<<s<<endl;


    }


    return 0;
}
