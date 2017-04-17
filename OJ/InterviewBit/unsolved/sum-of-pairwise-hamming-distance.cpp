#include<bits/stdc++.h>
using namespace std;
//int countSeteBits(int n){
//    int count = 0;
//    while(n){
//        count += n & 1;
//        n = n>>1;
//    }
//    return count;
//}
int hammingDistance(const vector<int> &v) {
    int sum = 0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            //it provides number of different bits in the number...
            int x = v[i] ^ v[j];
            //cout << countSeteBits(x) << endl;
            sum+=__builtin_popcount(x);
        }
    }
    return sum;
}
int main(){
   // cout << countSeteBits(2^6) << endl;
    vector<int> v={2,4,6};

    printf("%d\n",hammingDistance(v));
    //cout << "bitset; -> " << __builtin_popcount(3) << endl;
    return 0;
}