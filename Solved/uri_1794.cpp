#include <bits/stdc++.h>
using namespace std;
int main(){
//    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int n,a,b,c,d;scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    if((n>=a && n<=b)&& (n>=c && n<=d)){
        printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }
    return 0;
}