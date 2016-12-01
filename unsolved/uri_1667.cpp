#include<bits/stdc++.h>
using namespace std;
int main()
{
    //uri 1667
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    string str;
    vector<string> vs;
    while(getline(cin,str)){
        stringstream ss(str);
        string temp;
        while(ss>>temp){
            vs.push_back(temp);
        }
    }
    bool firstLine = false;
    int len = 0;
    for(auto it= vs.begin();it!=vs.end();it++){
        if(firstLine == false){
            firstLine = true;
        }
        else{
            cout << " ";
            len++;
        }
        if((*it).length() + len >80){
            cout << endl;
            len = 0;
            firstLine = false;
        }

        if((*it) == "<br>"){
            cout << endl;
            firstLine = false;
            len = 0;
        }
       else if(*it == "<hr>"){
            cout <<endl <<  "--------------------------------------------------------------------------------" << endl;
            firstLine = false;
            len = 0;
        }
        else {
            cout << *it;
            len+=(*it).length();
        }
    }

    return 0;
}