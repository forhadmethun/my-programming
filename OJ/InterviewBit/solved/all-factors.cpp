#include<bits/stdc++.h>
using namespace std;


vector<int> allFactors(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    set<int> u;//,v;
    for(int i=1;i<=sqrt((double)A);i++) {
        if (A % i == 0) {
            u.insert(i);
            u.insert(A / i);
        }
    }
    vector<int> v;
    for(auto it=u.begin();it!=u.end();it++){
        v.push_back(*it);
    }
    return v;

}

int main(){
    vector<int> v(allFactors(6));
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}