
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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1=="vertebrado"){
       if(s2=="ave"){
            if(s3=="carnivoro"){
                cout << "aguia" << endl;
            }else if(s3=="onivoro"){
                cout << "pomba" << endl;
            }
       }
       else if(s2=="mamifero"){
            if(s3=="onivoro"){
                cout << "homem" << endl;
            }else if(s3=="herbivoro"){
            cout << "vaca" << endl;
            }
       }
    }else{
        if(s2=="inseto"){
            if(s3=="hematofago"){
                cout << "pulga" << endl;
            }
           else if(s3=="herbivoro"){
                cout << "lagarta" << endl;
           }
        }else{
            if(s3=="hematofago"){
                cout << "sanguessuga" << endl;
            }else{
            cout << "minhoca"<<endl;
            }
        }
    }


    return 0;
}


