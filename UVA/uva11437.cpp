#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double x1,y1,x2,y2,x3,y3,bos,area;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        bos=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
        area=0.25*bos;
        cout<<area;
    }



    return 0;
}
