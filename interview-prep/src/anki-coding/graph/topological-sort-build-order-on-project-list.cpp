#include<bits/stdc++.h>
using namespace std;
/*

(d, g), (f, c), (f, b), (f, a), (c, a), (b, a), (a, e), (b, e)

    f     d

   /|\    |

  c | b   g

   \|/|

    a |

    |/

    e
 */
template<class T>
class Graph{
public:
    map<T, vector<T> > adjList;
    map<T,bool> visited;
    vector<T> topo;

    int E, V;
    void input(){

        cin >> E >> V;
        for(int i = 0; i < E; i++){
            T u,v;
            cin >> u >> v;

            //if element found
            if(adjList.find(u)!=adjList.end()){
                adjList.at(u).push_back(v);
            }
            else{
                adjList.insert({u,vector<T>()});
                adjList.at(u).push_back(v);
            }


//            if(adjList.find(v)!=adjList.end()){
//                adjList.at(v).push_back(u);
//            }
//            else{
//                adjList.insert({v,vector<T>()});
//                adjList.at(v).push_back(u);
//            }


        }
//        V = adjList.size();

        fill_visited_map();

    }
    void fill_visited_map(){
        for( auto it = adjList.begin(); it != adjList.end(); it++){
            visited.insert({it->first, false});
        }
    }

    void topo_sorting(){

        for( auto it = adjList.begin(); it != adjList.end(); it++){
            if(!visited.at(it->first)){
                dfs(it->first);
            }
        }

        print_topo_sort_order();


    }
    void dfs(T r){
//        visited.insert({r, true});

//        visited.at(r) = true;
//        if exisits
        if(visited.find(r) != visited.end()){
            visited.at(r) = true;
//            return;
        }
        else{
            topo.push_back(r);
            return;
        }
        vector<T> vec = adjList.at(r);
        for(int i = 0; i < vec.size(); i++){
            T v = vec[i];
//            if not  found
            if(visited.find(v)== visited.end()){
                dfs(v);
            }
//            if(!visited.at()){
//                dfs(vec[i]);
//            }
        }
        topo.push_back(r);

    }


    void print_topo_sort_order(){
        for(int i = topo.size() - 1; i >= 0 ; i--){
            cout << topo[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    freopen("/media/forhad/Development/MyCodes/Code/interviews/src/anki-coding/graph/topological-sort-build-order-on-project-list.in","r",stdin);

    Graph<char> g;
    g.input();
    g.topo_sorting();
    return 0;
}

