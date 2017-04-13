#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > squareSum(int A) {
    vector<vector<int> > ans;
    for (int a = 0; a * a <= A; a++) {
        for (int b = 0; b * b <= A; b++) {
            if (a * a + b * b == A && a <=b ) {
                vector<int> newEntry;
                newEntry.push_back(a);
                newEntry.push_back(b);
                ans.push_back(newEntry);
            }
        }
    }
    return ans;
}


int main(){
    vector< vector<int> > v(squareSum(9));
    for(int i=0 ; i<v.size();i++){
        cout << v[i][0] << "," << v[i][1] << endl;
    }
    return 0;
}