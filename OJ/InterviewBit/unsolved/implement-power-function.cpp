#include<bits/stdc++.h>
using namespace std;
int ans(int x,int n,int d){
    if( n == 0) return 1%d;
    int p = ans( x , n/2, d);
    if(n%2 == 0){
//        cout << "-->" <<  (((p)%d) * (p%d))%d << endl;
        return (((p)%d) * (p%d))%d ;
    }
    else {
//        cout << "-->!!!!" <<  (((x%d) * ((p)%d) * (p%d))%d)%d << endl;
        return ((x%d) * (((p)%d) * (p%d))%d)%d;
    }
}

int fastExp(int base, int p,int d) { // O(log p)
    if (p == 0) return 1%d;
    else if (p == 1) return base%d; // See the Exercise below
    else { int res = fastExp(base, p / 2,d); res = ((res%d) * (res%d))%d;
        if (p % 2 == 1) res = ((res%d) * (base%d))%d;
        return res%d; } }

int pow(int x, int n, int d) {
    int a =  fastExp(x,n,d);
    if( a <0)return a + d;
    else return a;

}


int main(){
    cout << pow(71045970,41535484,64735492) << endl;
//    cout << -1%20 << endl;
    return 0;
}