#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    freopen("in.txt","r",stdin);
    int n,q;
    int t = 1;
    while(scanf("%d %d",&n,&q) ==2 && n!=0 && q!=0){
        printf("CASE# %d:\n",t++);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<q;i++){
            int k;
            scanf("%d",&k);
            int has = 1;
            int index = 0;
            for(int j=0;j<n;j++){
                if(a[j] == k){
                    index = j;
                    has = 1;
                    break;
                }
                else {
                    has = 0;
                }
            }
            if(has ==1){
                printf("%d found at %d\n",k,index+1);
            }
            else{
                printf("%d not found\n",k);
            }


        }

    }

    return 0;
}
