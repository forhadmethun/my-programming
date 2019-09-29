#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
///#include<queue>#ifdef 

//#endif
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<conio.h>

using namespace std;
int ab(int x,int y)
{
    int c,d;
    if(x>y){
        c=x;
        d=y;
    }
    else if(y>x)
    {
        c=y;
        d=x;
    }
    int p=0;
    while(c!=d)
    {
        p++;
        c--;
    }
    return p;
}
int dif(int x,int y)
{
    if(x>y)return x-y;
    else return y-x;
}



int main()
{
    int x1,y1,x2,y2,a,b,p;
    //printf("%d",ab(4,80));
    //cout<<ab(4,6)<<endl;
    //cout<<ab(4,2)<<endl;
    while(cin>>x1>>y1>>x2>>y2){
    p=0;
    if(x1==0 && x2==0 && y1==0&& y2==0)break;

    if(x1==x2 && y1==y2)
    {
        cout<<p<<endl;
        //break;
    }
    else if(x1==x2 || y1==y2)
    {
        p++;
        cout<<p<<endl;

        //break;
    }
    else if(abs(y2-y1)==abs(x2-x1) || abs(y2-y1)==-abs(x2-x1))
    {
        cout<<1<<endl;
    }
    else if( (dif(x1,x2)) >= (dif(y1,y2)) )
    {
        p=ab(x1,x2);
        cout<<p<<endl;
       // cout<<"afd"<<endl;
            //break;
    }
    else if((dif(y1,y2))> dif(x1,x2))
    {
        p=ab(y1,y2);
            cout<<p<<endl;
           // cout<<"gua"<<endl;
            //break;
    }
}
    return 0;
}
//printf("",);
//printf("",);
//printf("",);







