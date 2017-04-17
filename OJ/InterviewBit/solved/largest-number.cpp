#include<bits/stdc++.h>
using namespace std;
int compare(string x,string y){
    string xy = x.append(y);
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}
string largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    //string str="";
    vector<string> str;
    for(int i=0;i<A.size();i++){
        //if(A[i]!=0)
        str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),compare);
    //reverse(str.begin(),str.end());
    string ans="";
    for(int i=0;i<str.size();i++){
        ans+=str[i];
    }
    int b = atoi(ans.c_str());
    if(b  == 0) return "0";
    else
    return ans;
}


int main(){
    vector<int> v={0,0,0,0};
    cout << largestNumber(v) << endl;
    return 0;
}