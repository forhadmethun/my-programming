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
    int a[10];
    a[0] = 6;
    a[1] = 2;
    a[2] = 5;
    a[3] = 5;
    a[4] = 4;
    a[5] = 5;
    a[6] = 6;
    a[7] = 3;
    a[8] = 7;
    a[9] = 6;
    int n;
    s1(n);
    while(n--){
        string aa;
        cin>>aa;
        int sum = 0;
        for(int i=0;i<aa.size();i++){
            //cout <<" a: "<< a[i] << endl;
            int x = aa[i] - '0';
           // cout <<"x:" << x << endl;
            sum +=a[x];
           // cout << "   sum:" << sum << endl;
        }
        //cout << sum << endl;
        printf("%d leds\n",sum);
    }

    return 0;
}


