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
        int sum = 0;
        vector<char> vc ;
        for(int i=0;i<s.size();i++){
            if(s[i] == '<'){
                vc.push_back('<');
            }
            else if(s[i] == '>' && !vc.empty())
            {
                //cout << "test :: " << s[i] ;
                sum++;
                vc.pop_back();
            }
        }
        cout << sum << endl;
    }

    return 0;
}
