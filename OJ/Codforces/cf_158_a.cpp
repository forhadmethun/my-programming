#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,temp,sum = 0;
    scanf("%d %d\n",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp>k)sum++;
    }
    printf("%d\n",sum);
    return 0;
}