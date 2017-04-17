#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=0;
    for(int i=0;i<A.size();i++){
        n = n*26 + (A[i] - 'A' + 1);
    }
    return n;

}

int main(){
cout << titleToNumber("AA") << endl;
cout << titleToNumber("A") << endl;
cout << titleToNumber("Z") << endl;
cout << titleToNumber("AB") << endl;
    return 0;
}