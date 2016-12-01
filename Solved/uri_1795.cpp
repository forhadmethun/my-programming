#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
ull fact[20+1];

ull nCr(int n,int r)
{
    return (fact[n] / ((fact[r]) * (fact[n-r])));
}

int main(){
    //uri 1795
    //  freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);

    fact[0]  = 1;
    fact[1] = 1;
    for(ull i=2;i<=20;i++){
        fact[i] = i*fact[i-1];
      //  cout << i << "--> "  << fact[i] << endl;
    }
    //cout << fact[5] << endl;
    for(int i=0;i<=3;i++){
        cout << nCr(3,i) << endl;
    }









    return 0;
}