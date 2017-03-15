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
    //freopen("in.txt","r",stdin);
    int n;
    long long a[65];
    a[0] = 0;
    a[1] = 1;
   // s1(n);
    for(int i=2;i<=62;i++){
        a[i] = a[i-1] + a[i-2];
    }
    /*
    for(int i=0;i<n;i++){
        cout <<a[i];
        if(i<n-1)cout << " ";
    }
    cout << endl;
    */
    int nn;
    s1(nn);
    while(nn--)
    {
        int s;
        s1(s);
        printf("Fib(%d) = %lld\n",s,a[s]);
    }


    return 0;
}


