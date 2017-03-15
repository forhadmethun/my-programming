#include<iostream>
using namespace std;
int main()
{
    int n,a,i,j,k,l[3],s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        for(j=1;j<=a;j++)
        {
            for(k=0;k<=2;k++)
            {
                cin>>l[k];

            }
            s+=l[0]*l[2];
        }
        cout<<s<<endl;
        s=0;
    }



    return 0;
}
