#include<bits/stdc++.h>
using namespace std;

int main(){
//    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);
//    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/out.txt","w",stdout);
    int first,second;while(scanf("%d%d\n",&first,&second)!=EOF){
        if(first == 0 && second==0)break;
        int arr[second][first];
        for(int i=0;i<second;i++){
            for(int j=0;j<first;j++){
               scanf("%d",&arr[i][j]);
            }
        }
        bool sol = false;
        for(int i=0;i<first;i++){
            int count = 0;
            for(int j=0;j<second;j++){
                if(arr[j][i]){
                    count++;
                }
            }

            if(count >= second){
                sol = true;
                break;
            }
        }

//        bool ans[first];
//        for(int i=0;i<first;i++){
//            ans[i] = false;
//        }
//        for(int i=0;i<first;i++){
//            for(int j=0;j<second;j++){
//                if(arr[j][i]){
//                    ans[i] = true;
//                }
//            }
//        }
//        bool sol = false;
//        for(int i=0;i<first;i++){
//            if(ans[i] == false){
//                break;
//            }
//            else{
//                sol = true;
//            }
//        }
        if(sol){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }

    return 0;
}