
#include<bits/stdc++.h>

#define s1(n) scanf("%lf",&n)
#define s2(n , m) scanf("%d %d",&n,&m)
#define s3(n , m , o) scanf("%lf %lf %lf",&n,&m,&o)

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
    double A,B,C;
    double a[3];
    for(int i=0;i<3;i++){
        s1(a[i]);
    }
    sort(a,a+3);

    A = a[2];
    B= a[1];
    C = a[0];
    if(A>=B+C){
       printf("NAO FORMA TRIANGULO\n");
       return 0;
    }
    if(A*A == B*B + C*C){
         printf("TRIANGULO RETANGULO\n");
    }
   if( A*A > (B*B + C*C)){
         printf("TRIANGULO OBTUSANGULO\n");
    }
    if(A*A < B*B + C*C){
         printf("TRIANGULO ACUTANGULO\n");
    }
    if(A ==B && B ==C){
         printf("TRIANGULO EQUILATERO\n");
    }
    if( (A==B && B !=C) || (B==C && C!=A) ||(C==A && A!=B)){
         printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}


