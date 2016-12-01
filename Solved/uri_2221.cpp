using namespace std;
#include<bits/stdc++.h>


///for taking input of any tipe , till 4 parameter


///inline void make(string &a) { string s ; if(scanf("%s",s)); a = s; }
inline void make(int &a) { if(scanf("%d", &a)); }
inline void make(float &a) { if(scanf("%f", &a)); }
inline void make(double &a) { if(scanf("%lf", &a)); }
inline void make(char *a) { if(scanf("%s", a)); }
inline void make(char &a) { if(scanf(" %c", &a)); }
inline void makec(char &a) { if(scanf("%c", &a)); }

template<typename A, typename B> inline void make(pair<A, B> & p) { make(p.first); make(p.second); }
template<typename A>
inline void maketab(A *tab, int size) { for(int i = 0; i < size; i++) make(tab[i]); }
template<typename A>
inline void maketab(vector<A> &v, int size) { typedef typename vector<A>::iterator iter; v.resize(size); for(iter i = v.begin(); i != v.end(); i++) make(*i); }

template<typename A, typename B>
inline void make(A &a, B &b) { make(a); make(b); }
template<typename A, typename B, typename C>
inline void make(A &a, B &b, C &c) { make(a); make(b); make(c); }
template<typename A, typename B, typename C, typename D>
inline void make(A &a, B &b, C &c, D &d) { make(a); make(b); make(c); make(d); }
template<typename A, typename B, typename C, typename D, typename E>
inline void make(A &a, B &b, C &c, D &d, E &e) { make(a); make(b); make(c); make(d); make(e); }


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

///size, push
#define sz(a) int((a).size())
#define pb push_back

///traverse all container
#define all(c) c.begin(),c.end()

///loop through all container
#define tr(c,it)\
            for(typeof(c.begin()) it=(c).begin();it!=(c).end();it++)

///for loop short form
#define FA(i,a,b) for(int i=(a);i<=(b);++i)
#define F(i,n) for(int i=0;i<(n);++i)
#define FR(i,a,b) for(int i=(a);i>=(b);--i)




int main()
{
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    int tc;
    make(tc);
    while(tc--)
    {
        float bonus;make(bonus);
        float ai1,ai2,di1,di2;int li1,li2;
        make(ai1,di1,li1);
        make(ai2,di2,li2);
        float d,g;
        if(li1%2 == 0){
            d = (ai1 + di1)/2.0 + bonus;
        }
        else{
            d = (ai1 + di1)/2.0 ;

        }
        if(li2%2== 0){
            g = (ai2 + di2)/2.0 + bonus;
        } else{
            g = (ai2 + di2)/2.0 ;

        }
        //cout << "d: " << d <<  " g:" << g << endl;
        if(d== g){
            cout << "Empate" << endl;
        }
        else if(d>g){
            cout << "Dabriel" << endl;

        }
        else{
            cout << "Guarte" << endl;
        }




    }

    return 0;
}


