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
    int n;
    freopen("input.txt","r",stdin);
    while( s1(n) != EOF ){
        for(int i=1;i<=n;i++){
            if(i==1 || i ==n){
                for(int j=1;j<n;j++){
                    printf("1   ");
                }printf("1");
                printf("\n");
            }
            else{
                printf("1   ");
                for(int j=1;j<=n-2;j++){
                    printf("2   ");
                }printf("1");
                printf("\n");
            }
        }
        cout << endl;
    }

    return 0;
}


