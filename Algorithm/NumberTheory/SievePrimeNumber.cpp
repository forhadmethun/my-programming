#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<10000010> bs;
vector<int> primes;



void sieve(ll upperbound){
    ll sieve_size = upperbound+1;
    bs[0] = bs[1] = 0;
    for(long long i=2;i<=sieve_size;i++){
        if(bs[i]){
            for(long long j=i*i;j<=sieve_size;j+=i){
                bs[j] = 0;
            }
            primes.push_back((int)i);
        }

    }

}

int main(){
    bs.set();
    sieve(1000000);
   for(auto it=primes.begin();it!=primes.end();it++){
       printf("%d\n",*it);
   }

    return 0;
}


