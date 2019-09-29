

using namespace std;
#include<bits/stdc++.h>
///=========================================FOR TAKING INPUT OF ANY TYPE , till 4 parameter====================================================
///inline void make(string &a) { string s ; if(scanf("%s",s)); a = s; }
inline void make(int &a)
{
    if (scanf("%d", &a))
    {
    }
}
inline void make(float &a)
{
    if (scanf("%f", &a))
    {
    }
}
inline void make(double &a)
{
    if (scanf("%lf", &a))
    {
    }
}
inline void make(char *a)
{
    if (scanf("%s", a))
    {
    }
}
inline void make(char &a)
{
    if (scanf(" %c", &a))
    {
    }
}
inline void makec(char &a)
{
    if (scanf("%c", &a))
    {
    }
}
template<typename A, typename B> inline void make(pair<A, B> & p)
{
    make(p.first);
    make(p.second);
}
template<typename A> inline void maketab(A *tab, int size)
{
    for (int i = 0; i < size; i++)
        make(tab[i]);
}
template<typename A> inline void maketab(vector<A> &v, int size)
{
    typedef typename vector<A>::iterator iter;
    v.resize(size);
    for (iter i = v.begin(); i != v.end(); i++)
        make(*i);
}
template<typename A, typename B> inline void make(A &a, B &b)
{
    make(a);
    make(b);
}
template<typename A, typename B, typename C> inline void make(A &a, B &b,
        C &c)
{
    make(a);
    make(b);
    make(c);
}
template<typename A, typename B, typename C, typename D> inline void make(A &a,
        B &b, C &c, D &d)
{
    make(a);
    make(b);
    make(c);
    make(d);
}
template<typename A, typename B, typename C, typename D, typename E> inline void make(
    A &a, B &b, C &c, D &d, E &e)
{
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
typedef set<int> si;
typedef map<string, int> msi;
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

#define FA(i,a,b) for(int i=(a);i<=(b);++i)
#define F(i,n) for(int i=0;i<(n);++i)
#define FB(i,a,b) for(int i=(a);i>=(b);--i)

//abs of any numbers
#define abs(x) (((x) < 0) ? - (x) : (x))
#define sq(x) x*x
//value of pi
#define PI 2*acos (0.0)
//}
//typedef long long ll;

#define mem(a,v) memset(a,v,sizeof(a)) //need to see in the internet
#define C printf("Case %d:",tc)
#define debug printf("\nDEBUG\n");

#define fi freopen("in.txt","r",stdin);
#define fo freopen("out.txt","w",stdout);



int main()
{
    int n;
    fi
    fo
    while(scanf("%d",&n) == 1)
    {
        /*
        string str[n+1];
        int arr[n+1];
        */
        /*
        memset(arr,0,sizeof(arr));
        F(i,n){
            cout << arr[i] << endl;

        }
        */
        vector< pair<string,int> >  pi;

        getchar();
        string str1,str2;
        getline(cin,str1);
        istringstream iss(str1);
        while(iss)
        {
            iss >> str2;
            pi.push_back(make_pair(str2,0));
        }
        /*
        for(auto it=pi.begin(); it!=pi.end(); it++)
        {
            cout << (string)it->first << " :money: " << it->second  << endl;
        }
        */

        F(i,n)
        {
            string name;
            vector<string> vs;
            getline(cin,name);

            istringstream iss2(name);
            while(iss2)
            {
                string temp;
                iss2 >> temp;
                vs.push_back(temp);
            }

            int provide,person ;
            sscanf(vs[1].c_str(),"%d",&provide);
            sscanf(vs[2].c_str(),"%d",&person);
            if(person ==0)continue;
            for(auto it=pi.begin(); it!=pi.end(); it++)
            {
                string s = (string)it->first;
                if( s ==vs[0])
                {
              //      cout << (string)it->first << " :money: " << it->second  << endl;

                    it->second -=(provide/person) * person;
                    break;
                }
            }
            //cout <<"provide: " << provide  << " person: " << person << endl;


            provide =(int) (int)provide/(int) person;
           // cout <<"size: " <<  vs.size() << endl;
            FA(l,3,vs.size()-1)
            {
                for(auto it=pi.begin(); it!=pi.end(); it++)
                {

                    string s = (string)it->first;

                    if( s ==vs[l])
                    {
                    it->second +=provide;
                    //cout << (string)it->first << " :money: " << it->second  << endl;

                        break;
                    }
                }
            }






        }


    //cout << "------------------------------------" << endl;
        F(m,n){

            cout <<pi[m].first << " " << pi[m].second << endl;
        }
        cout << endl;
    }

    return 0;
}
