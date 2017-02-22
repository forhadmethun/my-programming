#include<bits/stdc++.h>
using namespace std;
float ab(int x)
{
    return x>0?x:-x;
}
int main()
{
    float h,m;
    freopen("in.txt","r",stdin);
    while(scanf("%f:%f",&h,&m)!=EOF)
    {
        if(h==0 && m == 0)break;


       float Degree=abs(0.5*(60.0*h+m) - (6.0*m));
        printf("%0.3f\n",(Degree>180 ? (360-Degree) :Degree));// << endl;
    }

    return 0;
}
