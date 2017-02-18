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

int main(){
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //uri 1040
    double a,b,c,d;
    double f;
    cin >> a >> b >> c >> d;
    cin >> f;
   // cout << a << endl << b << endl << c << endl <<  d << endl << f<<  endl;

    double media,final_media;

            media = (a* 2 + b * 3 + c* 4 + d * 1)/10.0;
    printf("Media: %.1lf\n",media);
    final_media = (media + f)/2;
    if(media>=7.0){
        printf( "Aluno aprovado.\n");
    }
    else if(media<5){
        printf("Aluno reprovado.\n" );
    }
    else{
        printf("Aluno em exame.\n");
    }
    printf("Nota do exame: %.1lf\n",f);
    if(final_media>=5){
        printf( "Aluno aprovado.\n");
    }
    else if(final_media<=4.9){
        printf("Aluno reprovado.\n");
    }


                   printf("Media final: %.1lf\n", (media + f)/2);


    return 0;
}

