#include<bits/stdc++.h>
#include<string.h>

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
    string a;
    int n;
    s1(n);
    getchar();
    while(n--){
        getline(cin,a);

        for(int i=0;i<a.size();i++){
            if((a[i]>='A' && a[i]<='Z') ||(a[i]>='a' && a[i]<='z'))
            a[i] = a[i] +3;
        }


       // cout << " shifted 3: " << a << endl;
        reverse(a.begin(),a.end());
        //cout <<"reversed:   " << a << endl;

        int l = a.size()/2;
        for(int i=l;i<a.size();i++){
            a[i] = a[i]-1;
        }

        cout << a << endl;
        /*
        int l = strlen(a);

        float x = ceil(float(l) / 2);
        l = (int ) x;
        */



    }


    return 0;
}


