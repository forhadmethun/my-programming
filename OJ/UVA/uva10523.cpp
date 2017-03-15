#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long double i,j,k,n,a,s=0;
    while(cin>>n>>a)
    {
        s=0;


    for(i=1;i<=n;i++)
    {
        s+=i*pow(a,i);
    }
    s=int(s);
    cout<<s<<endl;
    }




    return 0;
}
