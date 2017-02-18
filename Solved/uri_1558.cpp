#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int root = (int)sqrt((double)n);
        bool ans = false;
        for(int i=0;i<=root;i++){
            for(int j=0;j<=root;j++){
                if(i*i + j*j == n){
                    ans = true;
                    break;
                }
            }
        }
        //cout << root << endl;
        if(ans){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}