#include<bits/stdc++.h>
using namespace std;

bool isExpressionTrue(string s)
{

    stack<char> vc;

    for(int i=0;i<s.size();i++){
        if(s[i] == '(')vc.push('(');
        else if(vc.empty()==true && s[i] == ')')return false;
        else if(s[i] == ')'){
            vc.pop();
        }


    }
    if(vc.empty())return true;
    return false;
}


int main()
{
    string s;
    freopen("in.txt","r",stdin);
    while(getline(cin,s)!=NULL)
    {
       // cout << s << endl;
        //cout << isExpressionTrue(s) << endl;
        if(isExpressionTrue(s))cout << "correct" << endl;
        else cout << "incorrect" << endl;

    }


    return 0;
}
