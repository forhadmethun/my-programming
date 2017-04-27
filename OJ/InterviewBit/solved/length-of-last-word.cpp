#include<bits/stdc++.h>
using namespace std;
int reverseWords(string &A) {
    stringstream ss(A);
    string str;
    vector<string> vs;
    while(ss >> str){
//        cout << "fault " << endl;
        vs.push_back(str);
    }
    //cout << "--> size: " << vs.size() << endl;
    int len = vs.size();
//    cout << len << endl;
    if(len == 0)return 0;
    return vs[len-1].length();

}

int main(){
    string str = "    ";
    cout << reverseWords(str);
    return 0;
}