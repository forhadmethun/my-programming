#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string str = to_string(A);
    string m = str;
    reverse(str.begin(),str.end());
    if(m==str) return true;
    else return false;

}


int main(){
    cout << isPalindrome(123) << endl;
    cout << isPalindrome(12321) << endl;
    return 0;
}