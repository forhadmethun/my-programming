#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > prettyPrint(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> > vvi;

    int n = A + ( A -1 );
    //cout << "--> " << n << endl;
    int mat[n][n];

    int y = 0,z = n;
    for(int i=0;i<A;i++){
        for(int k=y;k<z;k++){
            mat[i][k] = A-i;
            mat[k][i] = A-i;
            mat[z-1][k] = A-i;
            mat[k][z-1] = A-i;
        }
        y++;
        z--;
    }
    vector<int> vi;

    for(int i=0;i<n;i++){

        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(mat[i][j]);
        }
        vvi.push_back(v);
    }
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",vvi[i][j]);
        }
        printf("\n");
    }
    */


    return vvi;
}


int main(){
    prettyPrint(4);


    return 0;
}