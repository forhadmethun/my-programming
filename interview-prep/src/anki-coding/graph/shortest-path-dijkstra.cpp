#include<bits/stdc++.h>
using namespace std;

template<class T>
class Graph{
public:
    set<T> nodes;

    map<T, vector<pair<T, int>>> adjList;

    int V, E;

    void input(){
        freopen("/media/forhad/Development/MyCodes/Code/interviews/src/anki-coding/graph/shortest-path-dijkstra.in","r",stdin);
        scanf("%d",&E);
        for(int i = 0; i < E; i++){
            T u, v; int w;
            cin >> u >>v >> w;
            //if no element then insert vector inside the map key
            if(adjList.find(u) == adjList.end()){
                adjList.insert({u, vector<pair<T,int>>()});
            }
            adjList.at(u).push_back(pair<T,int>(v,w));
            nodes.insert(u);
            nodes.insert(v);

        }
    }

    void dijskstra_shortest_path(T s){
        priority_queue< pair<int, T>, vector<pair<int,T>>, greater< pair<int, T> > > pq;
        map<T, int> dist;

        //set distance to infinity
        for(auto it = nodes.begin(); it != nodes.end(); it++){
            dist.insert({*it, INT_MAX});
        }
        //set source distance to 0
        dist.at(s) = 0;

        pq.push(pair<int, T>(0,s));

        while(!pq.empty()){
            pair<int, T> front = pq.top();pq.pop();
            int d = front.first; T u  = front.second;

            if(d > dist.at(u))continue;
            if(adjList.find(u)!=adjList.end())
            for(int i = 0; i < adjList.at(u).size(); i++){
                pair<T, int> v = adjList.at(u)[i];
                if(dist.at(u) + v.second < dist.at(v.first)){
                    dist.at(v.first) = dist.at(u) + v.second;
                    pq.push(pair<int, T>(dist.at(v.first),v.first));
                }
            }
        }
        int check = 0;


    }


};
int main(){
//    Graph<int> g;
//    g.input();
//    g.dijskstra_shortest_path(2);


    Graph<char> g1;
    g1.input();
    g1.dijskstra_shortest_path('a');
}