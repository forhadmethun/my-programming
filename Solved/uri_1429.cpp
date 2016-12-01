#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
ull fact[10+1];

ull nCr(int n,int r)
{
    return (fact[n] / ((fact[r]) * (fact[n-r])));
}

int main(){
    //uri 1429
      freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);

    fact[0]  = 1;
    fact[1] = 1;
    for(ull i=2;i<=7;i++){
        fact[i] = i*fact[i-1];

    }
    int n;
    while(scanf("%d",&n) && n){
        int sum = 0;
        int i=1;
        while(n){
            sum+=fact[i++] * (n%10);

            n = n/10;
            //  cout << n << endl;
        }
        cout << sum << endl;
    }










    return 0;
}