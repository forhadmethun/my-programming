using namespace std;
#include<bits/stdc++.h>

///=========================================FOR TAKING INPUT OF ANY TYPE , till 4 parameter====================================================
///inline void make(string &a) { string s ; if(scanf("%s",s)); a = s; }
inline void make(int &a) { if (scanf("%d", &a)) {}}

inline void make(float &a) { if (scanf("%f", &a)) {}}

inline void make(double &a) { if (scanf("%lf", &a)) {}}

inline void make(char *a) { if (scanf("%s", a)) {}}

inline void make(char &a) { if (scanf(" %c", &a)) {}}

inline void makec(char &a) { if (scanf("%c", &a)) {}}

template<typename A, typename B>
inline void make(pair<A, B> &p) {
    make(p.first);
    make(p.second);
}

template<typename A>
inline void maketab(A *tab, int size) { for (int i = 0; i < size; i++) make(tab[i]); }

template<typename A>
inline void maketab(vector<A> &v, int size) {
    typedef typename vector<A>::iterator iter;
    v.resize(size);
    for (iter i = v.begin(); i != v.end(); i++) make(*i);
}

template<typename A, typename B>
inline void make(A &a, B &b) {
    make(a);
    make(b);
}

template<typename A, typename B, typename C>
inline void make(A &a, B &b, C &c) {
    make(a);
    make(b);
    make(c);
}

template<typename A, typename B, typename C, typename D>
inline void make(A &a, B &b, C &c, D &d) {
    make(a);
    make(b);
    make(c);
    make(d);
}

template<typename A, typename B, typename C, typename D, typename E>
inline void make(A &a, B &b, C &c, D &d, E &e) {
    make(a);
    make(b);
    make(c);
    make(d);
    make(e);
}


/// ==========================================================  FOR LESS WRITING OF ll, vector,pair, map , push,size,traverse objects===================
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii; //think about 2D matrix of pair
//typedef set<int> si;
//typedef map<string, int> msi;
typedef unsigned long long llu;
//typedef map<int,string> mis;

///size, push
#define sz(a) int((a).size())
#define pb push_back




///traverse all container
#define all(c) c.begin(),c.end()

///=============================================================== FOR USING FOR LOOP, (FORALL,FOR) ============================================


#define FA(i, a, b) for(int i=(a);i<=(b);++i)
#define F(i, n) for(int i=0;i<(n);++i)
#define FB(i, a, b) for(int i=(a);i>=(b);--i)


//abs of any numbers
#define abs(x) (((x) < 0) ? - (x) : (x))
#define sq(x) x*x
//value of pi
#define PI 2*acos (0.0)
//}
//typedef long long ll;

#define mem(a, v) memset(a,v,sizeof(a)) //need to see in the internet

#define C printf("Case %d:",tc)
#define debug printf("\nDEBUG\n");

#define fi freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
#define fo freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);



int main(int argc, char const *argv[]) {
  //  ios_base::sync_with_stdio(false);cin.tie(NULL);
   // fi
    int n;
    while(scanf("%d",&n)!=EOF && n){
        deque<int> q;
        for(int i=1;i<=n;i++){
            q.push_back(i);
        }

        vector<int> ans;
        bool first = true;
        cout << "Discarded cards: ";
        while(q.size()>1){
            if(!first)cout << ", ";
            first = false;

            int data= *q.begin();
            cout << data;// << endl;
            ans.push_back(data);
            q.pop_front();
            data = *q.begin();
            q.pop_front();
           q.push_back(data);
        }
        cout << endl << "Remaining card: " << q.front() << endl;

        /*
        for(auto it=ans.begin();it!=ans.end();it++){
            auto p = it;
            p++;
            if(p==ans.end()){

                printf("\nRemaining card: %d\n",*it);
            }
            else{
                if(it!=ans.begin()){
                    printf(", %d",*it);
                }
                else{
                    printf("Discarded cards: %d",*it);
                }
            }
        }
        */

    }




    return 0;
}
///Writer  : Md ForHad Hossain Methun
///Problem : URI 1110
///Time    :




