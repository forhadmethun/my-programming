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
    int o1=0,o2=0,e1=0,e2=0;
    int odd[6];
    int even[6];
    int odd2[6];
    int even2[6];
    int a;
    for(int i=0;i<10;i++){
        //if(i%2==0)s1(even[e1++]);
        s1(a);
        if(a%2==0)even[e1++] = a;
        else odd[o1++] = a;
    }
    for(int i=0;i<5;i++){
            s1(a);
        if(a%2==0)even2[e2++] = a;
        else odd2[o2++] = a;
    }
    for(int i=0;i<5;i++){
        printf("par[%d] = %d\n",i,even[i]);
    }
    for(int i=0;i<5;i++){
        printf("impar[%d] = %d\n",i,odd[i]);
    }
    for(int i=0;i<o2;i++){
        printf("impar[%d] = %d\n",i,odd2[i]);
    }
    for(int i=0;i<e2;i++){
        printf("par[%d] = %d\n",i,even2[i]);
    }


    return 0;
}


