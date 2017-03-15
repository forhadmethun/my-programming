#include<iostream>
using namespace std;
int main()
{
    int n;long long i,j,x;
    cin>>n;
    for(x=1;x<=n;x++)
    {
        cin>>i>>j;
        if(i>j)cout<<">"<<endl;
        else if(i<j)cout<<"<"<<endl;
        else if(i==j)cout<<"="<<endl;
    }



    return 0;
}
