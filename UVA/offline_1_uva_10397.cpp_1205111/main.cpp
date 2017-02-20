#include<bits/stdc++.h>

#define mp make_pair


using namespace std;

#define MAXX 752

vector< pair <int , int > > nodes;
vector<pair<double, pair <int , int > > > edges;
int N, M;
int parent[MAXX];
int find(int u)
{
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

double sqr(int a)
{
    return a*a;
}


int main()
{
    int p, q;
    freopen("in.txt","r",stdin);
    while(scanf("%d",&N) == 1)
    {
        nodes.clear();
        edges.clear();
        for(int i=0; i<N; i++)
        {
            cin >>p >> q;
            nodes.push_back(mp(p, q));
            parent[i] = i;
        }

        cin >> M;

        for(int i=0; i<M; i++)
        {
            cin >> p >> q;
             p--;
            q--;
            parent[ find(p) ] = find(q);
        }


        for(int i=0; i<N; i++)
        {

            for(int j=i+1;j<N;j++)
            {
                if(find(i) != find(j))
                {
                    edges.push_back( mp( sqrt( sqr(nodes[i].first - nodes[j].first) + sqr(nodes[i].second - nodes[j].second)  ) , mp(i, j)));
                }
            }
        }


        double result = 0;
        sort(edges.begin(),edges.end());
        for(int i = 0;i<edges.size();i++)
        {

            p = find(edges[i].second.first );
            q = find(edges[i].second.second);
            if( p != q)
            {
                parent[p] = q;
                result += edges[i].first;
            }
        }

        printf("%.2lf\n", result);





    }

    return 0;
}
