#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0;
    int diff = INT_MAX;
    int a = A.size(), b = B.size(), c = C.size();
    while( i < a && j < b & k < c){
        int minimum = min( A[i], min(B[j],C[k]));
        int maximum = max( A[i], max(B[j],C[k]));
        if( maximum - minimum < diff){
            diff = maximum - minimum;
        }
        if(diff == 0) break;
        if( A[i] == minimum ) i++;
        else if( B[j] == minimum) j++;
        else k++;
    }
    return diff;


}

int main(){
    vector<int> A{ 1, 4, 5, 8, 10 },B{6, 9, 15},C{2, 3, 6, 6 };
    cout << solve(A,B, C) << endl;

    return 0;
}