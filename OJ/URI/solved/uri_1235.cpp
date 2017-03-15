#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int n;
    scanf("%d",&n);
   getchar();

    while(n--){
       string s;
       getline(cin,s);
       //cout << "size : " << s.size() << endl;
       for(int i=(s.size()/2)-1;i>=0;i--){
        cout << s[i];
       }
       for(int i=s.size()-1;i>=s.size()/2;i--){
        cout<<s[i];
       }

       cout << endl;

    }
   // cout << endl;
}
