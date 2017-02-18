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
string replace_with_nine_hundred(string roman)
{

}

int main()
{
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //1960
    int input_number;
    cin >> input_number;
    string roman = "";
    while(input_number!=0)
    {
        if(input_number>=900){
            input_number-=900;
            roman+="CM";
        }
        else if(input_number>=500){
            roman+="D";
            input_number-=500;
        }
        else if(input_number>=400){
            roman+="CD";
            input_number-=400;
        }
        else if(input_number>=100){
            roman+="C";
            input_number-=100;
        }
        else if(input_number>=90){
            roman+="XC";
            input_number-=90;
        }
        else if(input_number>=50){
            roman+="L";
            input_number-=50;

        }
        else if(input_number>=40){
            roman+="XL";
            input_number-=40;

        }
        else if(input_number>=10){
            roman+="X";
            input_number-=10;

        }
        else if(input_number>=9){
            roman+="IX";
            input_number-=9;
        }
        else if(input_number>=5){
            roman+="V";
            input_number-=5;
        }
        else if(input_number>=4){
            roman+="IV";
            input_number-=4;
        }
        else if(input_number>=1){
            roman+="I";
            input_number-=1;

        }
        //cout<< roman << "--" << input_number << endl;
        if(input_number<=0)break;


    }
    cout<< roman << endl;//"--" << input_number << endl;


    return 0;
}



//   // i am bad and thats' good i will never be good and that's not ba d...
// why so slow.. baby ...


