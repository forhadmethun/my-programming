#include<bits/stdc++.h>
using namespace std;
void arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int size = A.size();
    for(int i=0;i<size;i++){
        A[i]+=(A[A[i]]% (size))*size;
    }
    for(int i=0;i<size;i++){
        A[i] = A[i] /size;
    }
}

int main(){
    vector<int> v = {1,0};
    arrange(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}