#include<bits/stdc++.h>
using namespace std;

int main(){
    //uri 2108
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);

    string str,temp;

    string max;int len = INT_MIN;
    while(getline(cin,str)){
        if(str == "0"){
            cout << endl;
            printf("The biggest word: %s\n",max.c_str());
            break;
        }
        stringstream ss(str);
        vector<string> vs;
        while(ss>>temp){
            vs.push_back(temp);
        }

        for(auto it=vs.begin();it!=vs.end();it++){
            //cout << *it << endl;
            if(it !=vs.begin()){
                cout << "-";
            }
            cout << (int)(*it).length();
            if((int) (*it).length() > len){
                max = *it;
                len = (int) (*it).length();
            }
        }
        cout << endl;
      //  cout << "----------------------------------------" << endl;
    }


    return 0;
}