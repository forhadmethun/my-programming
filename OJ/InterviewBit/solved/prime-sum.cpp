#include <bits/stdc++.h>
using namespace std;
//map<int, bool> m;
bitset<99999999 + 100> bs;

void sieve(int upperbound){
    int sieve_size = upperbound+1;
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long  i=2;i<=sieve_size;i++){
        if(bs[i]){
            for(long long j=i*i;j<=sieve_size;j+=i){bs[j] = 0;}
           // m[i]= 1;
        }
    }

}
vector<int> primesum(int A) {
    sieve(A);
    vector<int> v;
    for(int i=0;i<=A;i++){
        if(bs[i]==1 && bs[A-i]==1){
           // cout << i << "+" << x-i << endl;
            v.push_back(i);
            v.push_back(A-i);
            return v;
           // break;
        }
    }
}


int main(){
    vector<int> v(primesum(16777214));
    cout << v[0] << "," << v[1] << endl;



    return 0;
}