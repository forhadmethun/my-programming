#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)break;
        else if(h2==h1)
        {
            if(m2>=m1)
            cout << m2 - m1 << endl;
            else{
                cout << 60  * 24 - ( m1-m2) << endl;
            }
        }
        else if( h2>h1)
        {
            if(m2==m1){
                cout << (h2-h1)*60 << endl;
            }
            else if(m2>m1)
            {
                int m = (h2-h1)*60 + (m2-m1);

                cout << m << endl;
            }
            else{
                int m = (h2-h1 -1)*60 + (m2+60 - m1) ;
                cout << m << endl;
            }
        }

    else{
        if(m2==m1){
                cout << (h2+24-h1)*60 << endl;
            }
            else if(m2>m1)
            {
                int m = (h2-h1+24)*60 + (m2-m1);

                cout << m << endl;
            }
            else{
                int m = (h2-h1 -1 + 24)*60 + (m2+60 - m1) ;
                cout << m << endl;
            }
    }


    }
    return 0;
}
