#include<bits/stdc++.h>
using namespace std;
int findArray(vector<int> A, int f ){
    int l = 0;
    int h = (int)A.size() - 1;
    while(l<=h){
        int m = (l + h ) / 2;
        if(A[m] == f){
            return 1;
        }
       else if(A[m] < f){
            l = m+1;
        }
        else{
            h = m-1;
        }

    }
    return 0;
}
int searchMatrix(vector<vector<int> > &A, int B) {
    //cout << A.size() << endl;
    int row = (int)A.size() - 1;
    int col = (int)A[0].size() -1 ;

    int r = 0;

    //int r = col-1;

    if(B < A[0][0]) return 0;
    if(B > A[row][col]) return 0;

    int l = 0;
    int h = row;
    while(l<=h){
        int m = ( l + h) / 2; // 1
        if(B>=A[m][0]){
            l = m+1; // 1 + 1 ;h =2
        }
        else{
            h = m - 1;
        }
    }
//    cout << "H: " << h << endl;

    return findArray(A[h],B);

}

int main(){

    vector< vector<int> > v = {
            {1,  3,  5,  7},
            {10, 11, 16, 20},
            {23, 30, 34, 50},

};
    vector<int> s = {1,2,3,4};
 cout <<  searchMatrix(v,11) << endl;
//    cout << findArray(s,0) << endl;

    return 0;
}