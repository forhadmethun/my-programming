
#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

class UF{
    vi p,rank,setSize;
    int numSets;
public:
    UF(int N){
        setSize.assign(N,1);
        rank.assign(N,0);
        p.assign(N,0);
        numSets = N;
        for(int i=0;i<N;i++){
            p[i] = i;
        }
    }

    int findSet(int i)
    {
        return (p[i] == i) ? i : (p[i] = findSet(p[i]));
    }

    bool isSameSet(int i,int j)
    {
        return findSet(i) == findSet(j);
    }
    void unionSet(int i,int j)
    {
        if(!isSameSet(i,j)){
            numSets--;
            int x=  findSet(i);
            int y=  findSet(j);
            if(rank[x]> rank[y]){
                p[y] = x;
                setSize[x]+=setSize[y];
            }
            else{
                p[x] = y;
                setSize[y]+=setSize[x];
                if(rank[x] == rank[y]){
                    rank[y]++;
                }
            }
        }
    }
    int numDisjointSets()
    {
        return numSets;
    }
    int sizeOfSet(int i)
    {
        return setSize[findSet(i)];
    }


};




void kruskal()
{
    int V,E,u,v,w;
    while(cin >> V>> E) {
        if (V == 0 && E == 0)break;


        //AdjList.assign(V,vii());
        //  vi taken;
        vector<pair<int, ii> > EdgeList;
        int total_cost = 0;
        for (int i = 0; i < E; i++) {
            cin >> u >> v >> w;
            //u = -u;
            //v = -v;
            //w = -w;
            total_cost+=w;
            // AdjList[u].push_back(ii(v,w));
            //AdjList[v].push_back(ii(u,w));
            EdgeList.push_back(make_pair(w, ii(u, v)));
        }
        sort(EdgeList.begin(), EdgeList.end());

        int mst_cost = 0;
        UF uf(V);

        for (int i = 0; i < E; i++) {
            pair<int, ii> front = EdgeList[i];
            if (!uf.isSameSet(front.second.first, front.second.second)) {
                mst_cost += front.first;
                uf.unionSet(front.second.first, front.second.second);
            }
        }
        cout <<total_cost  -  mst_cost << endl;



    }



}




int main() {
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt", "r", stdin);
    kruskal();


    return 0;
}

/*input
4 5
1 2 7
1 4 6
4 2 9
4 3 8
2 3 6
*/


#include<bits/stdc++.h>
using namespace std;
#define amount 100
typedef pair<int,int> pii;

vector<pii >G[amount];// graph , contains pair(weight,vertex_connected_by);

bool visited[amount]; // keep the track of vertex that included in growing mst.

// initialize the visited array

void initialize(){
    for(int i=0;i<amount;i++){
        visited[i]=false;
    }
}
// prim's algorithm


int prim(int s){ // s is the source vertex

    int mst=0;
    // make priority queue to always select vertex which has minimum weight
    // it is priority queue of pair(weight,vertex) ;

    priority_queue<pii,vector<pii >,greater<pii > > Q;

    //push the source vertex

    Q.push(make_pair(0,s));

    pii p;

    while(!Q.empty()){ // while pq not empty

        p=Q.top();	// extract the minimum weight vertex
        Q.pop();   // pop from pq

        int x=p.second;

        if(visited[x]){  // it is check for cycle.
            continue;
        }

        mst+=p.first;
        visited[x]=true;

        // push all the neighbours which is not visited of this vertex

        for(int i=0;i<G[x].size();i++){
            int y=G[x][i].second;
            if(!visited[y]){
                Q.push(G[x][i]);
            }
        }
    }
    return mst;
}
int main(){
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt", "r", stdin);
    initialize();
    int v,e;
    cin>>v>>e; // no. of nodes and edges

    for(int i=0;i<e;i++){ // input edges in adjecency list
        int a,b,w;
        cin>>a>>b>>w;
        G[a].push_back(make_pair(w,b));
        G[b].push_back(make_pair(w,a));
    }
    cout << prim(1)<<endl;
}
