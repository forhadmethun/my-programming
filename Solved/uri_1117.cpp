#include<bits/stdc++.h>

#define s1(n) scanf("%d",&n)
#define s2(n , m) scanf("%f %f",&n,&m)
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




using namespace std;



int main()
{
    //freopen("in.txt","r",stdin);
    float a,b;
    int i=0;
    float sum = 0;
    while(scanf("%f",&a)==1)
    {
        if(a>=0.0 && a<=10.0){
            sum +=a;
            i++;

            if(i==2)break;

        }
        else{
            cout << "nota invalida" <<endl;

        }

    }
    printf("media = %.2f\n",sum/2);



    return 0;
}


