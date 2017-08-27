#include<bits/stdc++.h>
using namespace  std;

int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    long long n;
//    cout << "keno dukne na " << endl;
    while(1){
        scanf("%lld",&n);
        //cout << n << endl;
        if( n == 0) break;
        long long arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2;i<=n;i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
//        for(int i=0;i<=n;i++){
//            cout << arr[i] << " ";
//        }
        //cout << endl;
        printf("%lld\n",arr[n]);

    }
    return 0;
}