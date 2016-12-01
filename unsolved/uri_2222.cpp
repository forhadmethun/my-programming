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

struct custom{
    int n;
    vector<int> v;
};

void un(vector<int> v1,vector<int> v2)
{
    set<int> s;
    for(int i=0;i<v1.size();i++){
        s.insert(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        s.insert(v2[i]);
    }
    cout << s.size() << endl;
}

void in(vector<int> v1,vector<int> v2)
{
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int> s;
    set_intersection(v1.begin(), v1.end(),
                     v2.begin(), v2.end(),
                     back_inserter(s));
    cout << s.size() << endl;

}
void printVector(vector<int> v)
{
    F(i,v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;

}

int main()
{
    //freopen("D:\googleDrive\_CSE\_dayWise_work\2016\july_august_september_oct_nov_dec\Oct\URI_BEGINNER\in.txt","r",stdin);
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    int tc;make(tc);
    while(tc--)
    {
        int how_many_operation;
        make(how_many_operation);
        map<int, vector<int> > m;
        //custom c[how_many_operation];
        for(int i=0;i<how_many_operation;i++){
            //make(c[i].n);
           // cout << "!!! -> " << c[i].n << endl;
            int input;
            make(input);
            vector<int> vi;
            for(int j=0;j<input;j++){
                int in;
                make(in);
                vi.push_back(in);

             //   cout << "n: --- > " << in << endl;

            }
            m[input].swap(vi);

        }
        int how_many_operations;
        make(how_many_operation);
        for(int i=0;i<how_many_operation;i++){
            int operation_type, v1,v2;
            make(operation_type,v1,v2);

            //cout << "!!!!!!!!!!!!!!!!!!111 ->  " << v1 << "-- "  << v2 << "-- " << endl;
            vector<int> t1,t2;
            if(operation_type == 1){
                t1 = m[v1];
                t2 = m[v2];

//                for(int j=0;j<how_many_operation;j++){
//                    if(c[j].n == v1){
//                        //t1 = c[j].v;
//                        cout << "\t --> " << c[j].n << endl;
//
//                        for(int k=0;k<c[j].v.size();k++){
//                            t1.push_back(c[j].v[k]);
//                        }
//                        break;
//                    }
//
//                }
//
//
//                for(int j=0;j<how_many_operation;j++){
//
//                    if(c[j].n == v2){
//                        cout << "\t --> " << c[j].n << endl;
//                        for(int k=0;k<c[j].v.size();k++){
//                            t2.push_back(c[j].v[k]);
//                        }
//                        break;
//                    }
//                }

//                cout << "vector 1: " << endl;
//                printVector(t1);
//                cout << "vector 2: " << endl;
//
//                printVector(t2);

                in(t1,t2);

            }
            else if(operation_type == 2){
                t1 = m[v1];
                t2 = m[v2];
                un(t1,t2);
            }
 //           else if(operation_type == 2){
//                for(int j=0;j<how_many_operation;j++){
//                    if(c[j].n == v1){
//                        t1 = c[j].v;
//                    }
//                    if(c[j].n == v2){
//                        t2 = c[j].v;
//                    }
//                }
//               // un(t1,t2);
//            }
        }



    }


    return 0;
}


