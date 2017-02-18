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

   // freopen("in.txt","r",stdin);

        int a,b;

        while(s2(a,b) ==2 ){
        if( a== 0) break;
        else if( b==0)break;
        int big,small;
        if(a>b){
            big = a;
            small = b;
        }else{
            big = b;
            small = a;
        }

        int sum = 0;
        for(int i=small;i<=big;i++){
            sum+=i;
            cout << i << " ";
        }
        cout <<"Sum="<< sum << endl;

        }

    return 0;
}


