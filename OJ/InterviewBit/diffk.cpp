#include<bits/stdc++.h>
using namespace std;
int diffPossible(vector<int> &A, int B) {
   int i=0, j = 0;
    while(true){
        if( i >= A.size() || j>= A.size()) break;
        int diff= A[j] - A[i];
//        cout << "diff : " << diff << endl;
        if(i == j ) {
            j++;
            continue;
        }
        if(diff == B) return 1;

        else if( diff  < B) j++;
        else if(diff > B) i++;

    }
    return 0;


}

int main(){
    vector<int> v{0};
    cout << diffPossible(v,0) << endl;
    return 0;
}