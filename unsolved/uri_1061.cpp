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

int s100,s50,s20,s10,s5,s2,s1,sp5,sp25,sp1,sp05,sp01;

float rounding(float f){
    return roundf(f*100)/100;
}

double percentage(double num, double perc){
    return ( num* perc)/100.0;
}
int main(){
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    int d1, d2, h1, h2, m1, m2, s1, s2, stotal1, stotal2, stotal, dt, ht, mt, st;
    //printf("Dia ");
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    //printf("Dia ");
 //   cout << "S1 " << s1 << endl;
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
   // cout << "S1 " << s2 << endl;

    stotal1 = d1*86400 + h1*3600 + m1*60 + s1;
    stotal2 = d2*86400 + h2*3600 + m2*60 + s2;
    stotal = stotal2 - stotal1;
   // cout << "d: " << d1 << endl << d2 << endl;
    //cout << stotal << endl;
    if(stotal>=60){
        dt = stotal/86400;
        ht = (stotal%86400)/3600;
        mt = ((stotal%86400)%3600)/60;
        st = ((stotal%86400)%3600)%60;

        printf("%d dia(s)\n", dt);
        printf("%d horas(s)\n", ht);
        printf("%d minutos(s)\n", mt);
        printf("%d segundos(s)\n", st);
   }

}