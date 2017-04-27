#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-5
//babyLonian not work for floor integer...for getting time limit
//int sqrt(int A) {
//    float n  = (float ) A;
//    float x =n ;
//    float y = 1;
//    while(x - y > EPS){
//        x = (x + y ) / 2;
//        y = n/x;
//      //  cout << "-----------> " << x << endl;
//    }
//    return floor(x);
//}
typedef long long ll;
int sqrt(int A){

    ll low = 1;
    ll high = A;
    if( A == 0 || A == 1) return A;
    ll ans = 0,mid;

    while(low <= high){
         mid = (low + high) / 2;
//        cout << "low : " << low << " high: " << high << " mid; " << mid << endl;
        if( mid * mid == A) return mid;

        else if( mid * mid < A){
            low = mid + 1;
            ans = mid;
          //  cout << "answer found "<< ans << endl;
        }else{
            high = mid - 1;
        }
       // cout << "loop" << endl;
    }
    return ans;
}

int  main(){
    cout << sqrt(2147483646) << endl;
    return 0;
}