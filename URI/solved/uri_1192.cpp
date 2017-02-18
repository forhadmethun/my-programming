#include<bits/stdc++.h>
using namespace std;
int val(char ch)
{
    return ch - '0' ;
}
int main()
{
    //cout << val('1') + val('4') << endl;
    //
    freopen("in.txt","r",stdin);
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s[1] >='A' && s[1] <='Z'){

           if(s[0] == s[2]){
            cout << (val(s[2]))*(val(s[1])) << endl;
        }
        else
            cout << val(s[2]) -  val(s[0]) << endl;

        }
        else if(s[1] >='a' && s[1] <='z')
        {
            if(s[0] == s[2]){
            cout << val(s[0])*val(s[2]) << endl;
        } else
            cout << val(s[0]) + val(s[2]) << endl;
        }



    }

    return 0;
}

