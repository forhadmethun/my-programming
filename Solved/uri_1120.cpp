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


vector<char> vc;
int main()
{
    freopen("in.txt","r",stdin);
    int a;string s;
    while(cin>>a>>s){
        if(a==0 && s[0] =='0' && s.size()==1)break;
        int i = 0;
        //cout << "a: " << a << endl;
        //cout << "s: " << s << endl;

        for(i=0;i<s.size();i++){
            //vc.push_back(s[i]);
            int num = s[i] - '0';
            if(num == a)continue;
            if(num == 0){
                if(vc.empty()) continue;
                else vc.push_back(s[i]);
            }
            else
            vc.push_back(s[i]);


        }
        int allzero = 0;
        for(int i=0;i<vc.size();i++){
            //cout << vc[i];
            if(vc[i] == '0')allzero++;

        }
        if(allzero == vc.size())cout << 0;

        else if(vc.empty())cout << 0 ;
        else{
            for(int i=0;i<vc.size();i++){
            cout << vc[i];
            //if(vc[i] == '0')allzero++;

        }
        }
       // cout <<"a: " << a <<  endl;
       cout << endl;
        vc.clear();
    }


    return 0;
}


