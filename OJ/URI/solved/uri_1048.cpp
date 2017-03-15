
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



int main()
{
    float salary;
    s1(salary);
    if( salary >=0 && salary <=400.0){
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary + (salary*15)/100)   ,(salary*15)/100 , 15);
    }
    else if(salary>=400.01 && salary <=800.00){
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary + (salary*12)/100)   ,(salary*12)/100 , 12);
    }
    else if(salary>=800.01 && salary<=1200.00){
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary + (salary*10)/100)   ,(salary*10)/100 , 10);
    }
    else if(salary>=1200.01 && salary<=2000.00){
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary + (salary*7)/100)   ,(salary*7)/100 , 7);
    }
    else{
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",(salary + (salary*4)/100)   ,(salary*4)/100 , 4);
    }


    return 0;
}


