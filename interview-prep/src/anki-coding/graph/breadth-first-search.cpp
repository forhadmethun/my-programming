#include<bits/stdc++.h>
using namespace std;

class GraphSearch{
    public: 
        vector< vector<int, int> > v; 
        
        int vertex;

        void graph_input(){

        }

        void bfs(int s){
            vector<bool> visited; 
            visited.assign(vertex , false); 
            queue<int> q; 
            visited[s] = true; 
            q.push(s);
            while(!q.empty()){
                s = q.front(); 
                q.pop(); 
                printf("%d ", s);
                for(int i = 0; i < v[s].size(); i++){
                    int u = v[s][i]; 
                    if(!visited[u]){
                        visited[u] = true; 
                        q.push(u);
                    }
                }
            }
        }
};