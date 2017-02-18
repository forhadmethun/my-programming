#include<bits/stdc++.h>

#define s1(n) scanf("%f",&n)
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

float a[12][12];

int main()
{
    freopen("in.txt","r",stdin);
    int line;
    cin>>line;
    char ch;
    cin>>ch;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            s1(a[i][j]);
        }
    }
    float sum = 0;
    float mal = 0;
    if(ch=='S'){
        //for(int i = line;i)
        for(int i=0;i<12;i++){
            sum+=a[i][line];
        }
        //cout << sum << endl;
        printf("%0.1f\n",sum);
       // cout << " test "  << endl;
    }
    else if(ch=='M'){
        for(int i=0;i<12;i++){
            mal+=a[i][line];
        }
        //cout << mal/12 << endl;
        printf("%0.1f\n",mal/12.0);
       // cout << "test  " << endl;
    }



    return 0;
}


