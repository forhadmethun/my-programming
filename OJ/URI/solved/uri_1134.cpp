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
    int x = 1;
    int input;
    int alcohol= 0;
    int gasoline = 0;
    int diesel = 0;

    while(s1(input)==1)
    {
        if(x==1){
            cout << "MUITO OBRIGADO" << endl;
            x= 0;
        }
        if(input ==1)alcohol++;
        else if(input ==2) gasoline++;
        else if(input ==3 ) diesel++;
        else if(input ==4) break;

    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alcohol,gasoline,diesel);

    return 0;
}


