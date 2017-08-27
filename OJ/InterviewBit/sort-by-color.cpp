#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int one = 0, two = 0, zero = 0;
    for(int i=0;i<A.size();i++){
        if(A[i] == 0)zero++;
        else if(A[i] == 1)one++;
        else two++;
    }
    vector<int> B;
    for(int i=0;i<zero;i++){
        B.push_back(0);
    }
    for(int j=0;j<one;j++){
        B.push_back(1);
    }
    for(int k=0;k<two;k++){
        B.push_back(2);
    }
    A = B;
}

int main(){
    vector<int> A = {0,1,0,0,1,1,2,2,1,0,0};
   sortColors(A);
    for(int i=0;i<A.size();i++){
        cout <<A[i] << " ";

    }
    cout << endl;

    return 0;
}