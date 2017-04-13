#include<bits/stdc++.h>
using namespace std;

bool isPrime(int A){
   // int A = 1000000;
    if(A == 1)return 0;
    for(int i=2;i<=sqrt((double)A);i++){
        if(A%i==0)return 0;
    }
    return 1;

}
int main(){

//    cout << INT_MAX << endl;
    cout <<isPrime(84923) << endl;





    return 0;
}