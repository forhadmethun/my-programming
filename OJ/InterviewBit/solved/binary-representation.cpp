#include <bits/stdc++.h>
using namespace std;
string findDigitsInBinary(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    while(A!=0){
        s+=to_string(A%2);
        A/=2;
       // cout << "-------> " << s << endl;
    }
     reverse(s.begin(),s.end());
    return s;
}


int main(){
    cout << findDigitsInBinary(6) << endl;
    return 0;
}