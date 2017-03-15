#include<bits/stdc++.h>
using namespace std;
char process_char(char ch , int cipher)
{
    ch-=cipher;
    if(ch<'A')return 'Z' + ch - 'A' +1;
    else return ch;

}
void string_process(string s,int cipher)
{
    for(int i=0;i<s.size();i++){
       s[i] =  process_char(s[i],cipher);
    }

    cout << s << endl;
}

int main()
{
    int T;
    freopen("in.txt","r",stdin);
    scanf("%d",&T);

    getchar();
    while(T--)
    {
        string s;
        int val;
        getline(cin,s);
        scanf("%d",&val);
        string_process(s,val);
        getchar();

    }




    return 0;
}

