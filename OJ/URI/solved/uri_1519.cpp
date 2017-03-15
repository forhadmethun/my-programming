#include<bits/stdc++.h>
using namespace std;

int main(){
    //uri 1519
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    string str;
    while(getline(cin,str)){
        if(str == ".")break;
        stringstream ss(str);
        string temp;
        vector<string> vs;

        while(ss >> temp){
            vs.push_back(temp);

        }
        map<string, bool> mss;
        for(auto it=vs.begin();it!=vs.end();it++){
           if((*it).length() <3){
               mss[*it] = false;
           }
            





        }
        cout <<endl  <<  mss.size() << endl;
        for(auto it=mss.begin();it!=mss.end();it++){
            cout << it->first  << " = " << it->second << endl;
        }


        cout << endl;


    }
    return 0;
}