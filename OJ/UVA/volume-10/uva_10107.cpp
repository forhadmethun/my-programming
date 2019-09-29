#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    vector<int> v;
    while(scanf("%d",&n)!=EOF)
    {

        v.push_back(n);
        sort(v.begin(),v.end());
        int len =(int) v.size();
       // cout << len << endl;
        if(len%2==0){
                len =len /2;
            cout << (v[len-1] + v[len] ) /2 << endl;
        }else{
            len = len/2;
            cout << v[len] << endl;

        }



    }

    return 0;
}
