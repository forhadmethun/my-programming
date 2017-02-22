#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        cout<<(c*(2*a-b)/(a+b))<<endl;
    }


    return 0;
}
