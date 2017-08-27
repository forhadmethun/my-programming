#include<bits/stdc++.h>
using namespace std;

 int positive_modulo(long long i, long long n) {
    return (i % n + n) % n;
}

int modpow(int a,int b,int c){
    long long x = 1,y = a;
    while(b > 0){
        if(b&1){
            x = positive_modulo((x*y) , c);
        }
        y = positive_modulo((y*y) , c);
        b /= 2;

    }
    return positive_modulo(x,c);
}
int main(){
    printf("%d \n",modpow(2,3,3));
    //printf("%d\n",-1%20);

    return 0;
}