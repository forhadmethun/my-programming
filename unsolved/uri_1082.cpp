#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

#define DFS_BLACK 1
#define DFS_WHITE -1
vector<vector<int> > AdjList;
int V,E;
vi dfs_num;

void dfs(int n){
    printf("%c,",n+'a');
    dfs_num[n] = DFS_BLACK;
    for(int i=0;i<(int)AdjList[n].size();i++){
        if(dfs_num[AdjList[n][i]] == DFS_WHITE){
            dfs(AdjList[n][i]);
        }
    }

}


int main(){
   freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
    int tc;scanf("%d",&tc);//cout << "!! " << tc << endl;
    for(int t=1;t<=tc;t++){
        scanf("%d%d\n",&V,&E);
        AdjList.assign(V,vector<int>());
        for(int i=0;i<E;i++){
            char a,b;scanf("%c %c\n",&a,&b);
            //cout << "---> " << a  << "--> " << b << endl;
            AdjList[a-'a'].push_back( b-'a');
            AdjList[b-'a'].push_back( a-'a');


        }

        printf("Case #%d:\n",t);

        dfs_num.assign(V,DFS_WHITE);
        int numCC = 0;
        //dfs(3);

        for(int i=0;i<V;i++){
            if(dfs_num[i] == DFS_WHITE){
                numCC++;
                dfs(i);
                cout << endl;}
        }



        printf("%d connected components\n\n",numCC);
        //dfs(0);

        /*
       for(int i=0;i<V;i++){
           printf("\n%c: ",'a' + i);// << ": ";
           for(int j=0;j<AdjList[i].size();j++){
               printf("%c",AdjList[i][j] + 'a');
           }
       }
         */



    }


    return 0;
}
