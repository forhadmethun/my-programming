#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len = (int)A.size();
    string str = "";
    for(int i=0;i<len;i++){
        if((A[i]>='a' && A[i]<='Z ')||(A[i]>='A' && A[i]<='Z') || (A[i]>='0' && A[i]<='9')){
            str+=tolower(A[i]);
        }
    }
    string rev(str);
    reverse(rev.begin(),rev.end());
//    cout << str  << " : rev : " << rev << endl;
    if(rev == str)return 1;
    return 0;


}

int main(){
    if(isPalindrome("1a2")){
        printf("palindrome\n");
    }
    return 0;
}