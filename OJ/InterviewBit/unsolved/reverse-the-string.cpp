#include<bits/stdc++.h>
using namespace std;
void reverseWords(string &A) {
    stringstream ss(A);
    string str;
    vector<string> vs;
    while(ss >> str){
        vs.push_back(str);
    }
    //cout << "--> size: " << vs.size() << endl;
    int len = vs.size();
    for(int i=len-1;i>=0;i--){
        if(i!=len-1)cout << " ";
        cout << vs[i];

    }

}

int main(){
    string str = "j";
    reverseWords(str);
    return 0;
}