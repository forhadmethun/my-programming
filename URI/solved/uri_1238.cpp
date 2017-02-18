#include<bits/stdc++.h>
using namespace std;
vector<char> v1;
vector<char> v2;
int main()
{
    int n;
    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    getchar();
    while(n--){
        string s;
        getline(cin,s);
        for(int i=0;s[i]!=' ';i++){
            v1.push_back(s[i]);
        }

        for(int i=v1.size()+1;i<s.size();i++){
            v2.push_back(s[i]);
        }
        int p=0,q=0;
        /*
        for(int i=0;i<v1.size();i++)cout << v1[i] ;
        cout << endl;
        for(int i=0;i<v2.size();i++)cout << v2[i] ;
        cout << endl;
        */
        int min = v1.size() >v2.size() ? v2.size():v1.size();
        for(int i=0;i<min*2;i++){
            if(i%2==0){
                cout << v1[p++];
            }
            else{
                cout << v2[q++];
            }
        }
        if(v1.size()>v2.size()){
            for(int i=min;i<v1.size();i++){
                cout << v1[i];
            }
        }
        else if(v1.size() < v2.size()){
            for(int i = min;i<v2.size();i++){
                cout << v2[i];
            }
        }



        v2.clear();
        v1.clear();
        cout << endl;
    }


    return 0;
}
