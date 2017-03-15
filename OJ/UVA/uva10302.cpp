#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long  x,s,i;
    while(cin>>x){
            s=(x*x*(x+1)*(x+1))/4;
     /*   for(i=1;i<=x;i++)
        {
            s+=pow(i,3);
        }*/
        cout<<s<<endl;
    }

    return 0;
}
