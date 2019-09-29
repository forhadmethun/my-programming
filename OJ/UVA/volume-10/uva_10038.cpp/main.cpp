#include <bits/stdc++.h>
//just header ....
using namespace std;
#include<bits/stdc++.h>


///=========================================FOR TAKING INPUT OF ANY TYPE , till 4 parameter====================================================

///inline void make(string &a) { string s ; if(scanf("%s",s)); a = s; }
inline void make(int &a)
{
    if(scanf("%d", &a));
}
inline void make(float &a)
{
    if(scanf("%f", &a));
}
inline void make(double &a)
{
    if(scanf("%lf", &a));
}
inline void make(char *a)
{
    if(scanf("%s", a));
}
inline void make(char &a)
{
    if(scanf(" %c", &a));
}
inline void makec(char &a)
{
    if(scanf("%c", &a));
}

template<typename A, typename B> inline void make(pair<A, B> & p)
{
    make(p.first);
    make(p.second);
}
template<typename A>
inline void maketab(A *tab, int size)
{
    for(int i = 0; i < size; i++) make(tab[i]);
}
template<typename A>
inline void maketab(vector<A> &v, int size)
{
    typedef typename vector<A>::iterator iter;
    v.resize(size);
    for(iter i = v.begin(); i != v.end(); i++) make(*i);
}

template<typename A, typename B>
inline void make(A &a, B &b)
{
    make(a);
    make(b);
}
template<typename A, typename B, typename C>
inline void make(A &a, B &b, C &c)
{
    make(a);
    make(b);
    make(c);
}
template<typename A, typename B, typename C, typename D>
inline void make(A &a, B &b, C &c, D &d)
{
    make(a);
    make(b);
    make(c);
    make(d);
}
template<typename A, typename B, typename C, typename D, typename E>
inline void make(A &a, B &b, C &c, D &d, E &e)
{
    make(a);
    make(b);
    make(c);
    make(d);
    make(e);
}





/// ==========================================================  FOR LESS WRITING OF ll, vector,pair, map , push,size,traverse objects===================
typedef long long       ll;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<vii>     vvii; //think about 2D matrix of pair
typedef set<int>        si;
typedef map<string,int> msi;
typedef unsigned long long llu;


///size, push
#define sz(a) int((a).size())
#define pb push_back




///traverse all container
#define all(c) c.begin(),c.end()



///attention .... it is not ............standard ....so it will not work...try to omit this.....
///loop through all container
#define tr(c,it)\
            for(typeof(c.begin()) it=(c).begin();it!=(c).end();it++)

///=============================================================== FOR USING FOR LOOP, (FORALL,FOR) ============================================
#define FORALL(i,a,b) for(int i=(a);i<=(b);++i)
#define FOR(i,n) for(int i=0;i<(n);++i)
#define FORB(i,a,b) for(int i=(a);i>=(b);--i)


//abs of any numbers
#define abs(x) (((x) < 0) ? - (x) : (x))
#define sq(x) x*x
//value of pi
#define PI 2*acos (0.0)
//}
//typedef long long ll;

#define mem(a,v) memset(a,v,sizeof(a)) //need to see in the internet

#define OC printf("Case %d:",i)




int aabs(int a)
{
    return a<0 ? -a :a;
}
int main()
{
    //cout << "Hello world!" << endl;
    freopen("in.txt","r",stdin);
    int n;
    vi v,q;
    while(scanf("%d",&n)==1)
    {
        /*
        FOR(i,n)
        {
            int p;
            make(p);
            v.push_back(p);

        }
        FORALL(i,1,n-1)
        {
            cout << "vi" << v[i] <<  " vi-1: " << v[i-1] << endl;
            int ans = v[i] - v[i-1];

            q.push_back(aabs(ans ));
            cout << "v: " <<  v[i] << " " <<  q[i-1] << endl;
        }
        sort(q.begin(),q.end());
        bool t = true;
        for(int i=0;i<q.size();i++)
        {
            if(q[i] == i+1){}
            else t = false;
        }
        if(t == true){
            cout << "Jolly" << endl;
        }else{
        cout << "Not jolly" << endl;

        }
        v.clear();
        */
        int a,b;
        cin >> a;
        for(int i=1;i<n;i++)
        {
            cin >> b;

           int x = b-a;
            v.push_back(aabs(x));
            //cout << v[i-1] << endl;
             a = b;
        }
        sort(v.begin(),v.end());

        bool t = true;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] == i+1){}
            else t = false;
        }
        if(t == true){
            cout << "Jolly" << endl;
        }else{
        cout << "Not jolly" << endl;

        }
        v.clear();



    }
    return 0;
}
