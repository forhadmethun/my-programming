#include<bits/stdc++.h>

/*
int m(int x,int y)
{
    if(x>y)return x-y;
    else return y-x;
}
*/
using namespace std;
int main()
{
    int a,b,n,i,j;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)break;
        /*
        if((abs(a, b)) > (100 -abs(a, b))){
            cout << (100 -abs((a, b)) << endl;
        }
        else{
            cout << (abs(a,b))  << endl;
        }
        */

        if( (a>b ? a-b : b-a) > (100 -(a>b ? a-b : b-a)))
        {

            cout << (100 -(a>b ? a-b : b-a)) << endl;
        }
        else {
           cout << (a>b ? a-b : b-a) << endl;
        }
        /*

        else if(m(a,b)<=50)cout<<m(a,b)<<endl;
        else cout<<100-m(a,b)<<endl;
        */



    }


    return 0;
}
