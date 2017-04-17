#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    set<int> row;
    set <int> col;
    int r = A.size();
    int c = A[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j] == 0){
                row.insert(i);col.insert(j);
            }

        }
    }
    for(auto it=row.begin();it!=row.end();it++){
        int r =*it;
        for(int j=0;j<c;j++){
            A[r][j] = 0;

        }
    }
    for(auto it=col.begin();it!=col.end();it++){
        int c =*it;
        for(int i=0;i<r;i++){
            A[i][c] = 0;

        }
    }
}


int main(){
    vector<int> v1={1,1,0};
    vector<int> v2={1,1,1};
    vector<int> v3={0,1,1};

    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    setZeroes(v);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
