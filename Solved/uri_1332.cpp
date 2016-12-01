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
    int n;
    s1(n);
    while(n--){
        string a;
        cin>>a;
        int one  = 0;
        int two = 0;
        if(a.size() == 5 )cout << 3 << endl;
        else{
                /*
            for(int i=0;i<3;i++){
                if(a[i] =='o' || a[i] =='n' || a[i] == 'e')one++;
                if(a[i] == 't' || a[i] =='w' || a[i] =='o')two++;


            }
            */
            if(a[0] =='o' )one++;
            if(a[1] =='n')one++;
            if( a[2] == 'e')one++;
            if(a[0] == 't')two++;
            if(a[1] =='w')two++;
             if(a[2] =='o')two++;

            if(one>two)cout << 1 << endl;
            else cout << 2 << endl;
        }
    }


    return 0;
}


