#include<bits/stdc++.h>
using namespace std;
#define SIZE 100001

typedef long long   ll;
//submit id
//0e923ec8-62f7-42ac-81fd-42b44e75a339


//http://blog.csdn.net/woainiwss/article/details/51534188

ll prefix[SIZE],suffix[SIZE],arr[SIZE],res[SIZE];
ll cal(ll zu[SIZE], int m, int n){
    ll res = 0;
    for (int i = m; i <= n; i++){
        res = max(res, zu[i]);
    }
    return res;
}
int main(){
    int N;
    scanf("%d",&N);
    int i = 1;
    for (int i = 1; i <= N; i++){
        scanf("%d",&arr[i]);
    }
    prefix[0] = prefix[N + 1] = suffix[0] = suffix[N + 1] = 0;
    for (int i = 1; i<N; i++){
        prefix[i] = prefix[i - 1] ^ arr[i];
    }
    for (int i = N; i >= 1; i--){
        suffix[i] = suffix[i + 1] ^ arr[i];
    }
    ll ans = 0;
    for (int i = 1; i <= N; i++){
        ans = max(ans, max(cal(prefix, 0, i), cal(suffix, i + 1, N)));
    }
    printf("%d\n",ans);
    return 0;
}
