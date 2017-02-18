using namespace std;
#include<bits/stdc++.h>
int pos(int a,int b){
    if( a > b) return a-b;
    else return b-a;
}
int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
//    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);

    int tc;scanf("%d\n",&tc);
    while(tc--){
        int n;vector<int> vi;scanf("%d",&n);
        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);
            vi.push_back(in);
        }
        sort(vi.begin(),vi.end());
        for(int i=0;i<n;i++){
            if(i!=0)printf(" ");
            printf("%d",vi[i]);
        }
        printf("\n");
    }
    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1566
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
