using namespace std;
#include<bits/stdc++.h>
inline void make(int &a) { if(scanf("%d", &a)); }inline void make(float &a) { if(scanf("%f", &a)); }inline void make(double &a) { if(scanf("%lf", &a)); }inline void make(char *a) { if(scanf("%s", a)); }inline void make(char &a) { if(scanf(" %c", &a)); }inline void makec(char &a) { if(scanf("%c", &a)); }template<typename A, typename B> inline void make(pair<A, B> & p) { make(p.first); make(p.second); }template<typename A> inline void maketab(A *tab, int size) { for(int i = 0; i < size; i++) make(tab[i]); }template<typename A> inline void maketab(vector<A> &v, int size) { typedef typename vector<A>::iterator iter; v.resize(size); for(iter i = v.begin(); i != v.end(); i++) make(*i); }template<typename A, typename B> inline void make(A &a, B &b) { make(a); make(b); }template<typename A, typename B, typename C> inline void make(A &a, B &b, C &c) { make(a); make(b); make(c); }template<typename A, typename B, typename C, typename D> inline void make(A &a, B &b, C &c, D &d) { make(a); make(b); make(c); make(d); }template<typename A, typename B, typename C, typename D, typename E> inline void make(A &a, B &b, C &c, D &d, E &e) { make(a); make(b); make(c); make(d); make(e); }
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

int s100,s50,s20,s10,s5,s2,s1;

int main(){
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //uri 1018
    int num,ans;
    scanf("%d",&num);
    ans = num ;

    while(num)
    {
        if(num>= 100){
            num-=100;
            s100++;
        }
        else if(num>=50){
            num-=50;
            s50++;
        }
        else if(num>=20){
            num-=20;
            s20++;
        }
        else if(num>=10){
            num-=10;
            s10++;
        }
        else if(num>=5){
            num-=5;
            s5++;
        }
        else if(num>=2){
            num -=2;
            s2++;
        }
        else if(num>=1){
            num -=1;
            s1++;
        }
    }
    printf("%d\n%d nota(s) de R$ 100,00\n"
                   "%d nota(s) de R$ 50,00\n"
                   "%d nota(s) de R$ 20,00\n"
                   "%d nota(s) de R$ 10,00\n"
                   "%d nota(s) de R$ 5,00\n"
                   "%d nota(s) de R$ 2,00\n"
                   "%d nota(s) de R$ 1,00\n",ans,s100,s50,s20,s10,s5,s2,s1);


    return 0;
}

