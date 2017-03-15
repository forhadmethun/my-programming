#include<bits/stdc++.h>

#define s1(n) scanf("%d",&n)
#define s2(n , m) scanf("%d %d",&n,&m)
#define s3(n , m , o) scanf("%d %d %d",&n,&m,&o)

/// others type -> ld , lld , f , llf , s , c .....

#define p1(n) printf("%d\n",n);
#define p2(n,m) printf("%d %d\n",n,m)
#define p3(n,m,o) printf("%d %d %d\n",n,m,o);


/*
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int ,int> ii;
*/

#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int , int>



///size, push
#define sz(a) int((a).size())
#define pb push_back

///traverse all container
#define all(c) c.begin(),c.end()


///loop through all container
#define tr(c,it)\
            for(typeof(c.begin()) it=(c).begin();it!=(c).end();it++)


///finding anything among container
#define present(container,element) (container.find(element)!=container.end())
#define cpresent(container,element) (find(all(container,element)!=container.end()))



using namespace std;



int main()
{
    freopen("in.txt","r",stdin);
    int a,b;
    int in = 0 , gen = 0 , dr = 0 ;

    int i = 0;
    while(s2(a,b)==2)
    {
        i++;
        if(a>b){
            in++;
        }
        else if(b>a){
            gen++;
        }
        else{
            dr++;
        }


        cout <<"Novo grenal (1-sim 2-nao)" << endl;
        int con;
        s1(con);
        if(con ==1)continue;
        else{
            break;
        }

    }

    printf("%d grenais\n",i);
    printf("Inter:%d\n",in);
    printf("Gremio:%d\n",gen);
    printf("Empates:%d\n",dr);
    if(in>gen){
    cout << "Inter venceu mais" << endl;}
    else if(gen>in){
        cout <<"Gremio venceu mais" << endl;
    }
    else{
        cout <<  "Nao houve vencedor" << endl;
    }

    return 0;
}


