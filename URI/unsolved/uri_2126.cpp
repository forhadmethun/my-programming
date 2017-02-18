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
    string choto, boro;int case_no = 0,subsequece=0,pos=0;
    while(getline(cin,choto))
    {
        choto.pop_back();
        getline(cin,boro);
        subsequece = 0;
        pos = 1;
        //cout << "boro: " << boro << "-- choto: " << choto << endl;

        printf("Caso #%d:\n",++case_no);
        for(int i=0;i<boro.length();i++){
            bool ha = true;
            for(int j=0;j<choto.length();j++){
                if(i+j<boro.length())
                {

                    if(boro[i+j] != choto[j]){
                        ha = false;
                        break;
                    }

                }
                // cout << "HA : " << ha << endl;
            }
            if(ha){
                subsequece++;
                pos = i+1;
            }
        }
        if(subsequece == 0){
            //Nao existe subsequencia
            printf("Nao existe subsequencia\n");
        }
        else{

            printf("Qtd.Subsequencias: %d\n"
                           "Pos: %d\n",subsequece,pos);
        }

        // cout << choto <<  " --  " << boro << endl;
    }


    return 0;
}


