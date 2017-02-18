#include<bits/stdc++.h>
using namespace std;

int main(){
//    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);
//    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/out.txt","w",stdout);
    int tc;scanf("%d\n",&tc);
    //cout << "temp --" << endl;
    for(int t = 1;t<=tc;t++){
        if(t>1)printf("\n");
        int mod,n;scanf("%d %d\n",&mod,&n);
        vector<vector<int> > vvi;
        vvi.assign(mod,vector<int>());

        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);
            vvi[in%mod].push_back(in);
        }
        for(int i=0;i<mod;i++){
            printf("%d ->",i);
            for(int j=0;j<vvi[i].size();j++){
               // cout << vvi[i][j] << " ";
                printf(" %d ->",vvi[i][j]);
            }
            printf(" \\\n");
        }
       // printf("\n");

    }


    return 0;
}