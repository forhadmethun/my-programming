#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if( a== 0)return b;
    return gcd(b%a, a);
}
/*
 * 12 /18 / 1
 *     12
 *    ========
 *     6/ 12 / 2
 *        12
 *       =========
 *         0
 *
 *         a/b/
 *         a = b%a  a = 0 // break;
 *         b contains result...
 *
 *         a = 12
 *         b = 18
 *
 *         b = a;
 *         a = 6
 *
 *         b = a
 *         a = 0
 *
 */
int main(){
    printf("%d\n-->%d\n",gcd(12,18),6%2);
    return 0;
}