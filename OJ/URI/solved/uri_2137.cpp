#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

int main()
{

    //uri 2137
   freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);

    int tc;
    while(scanf("%d\n",&tc) == 1) {
       // set<string> ss;
        vector<string> vs;
            for(int i=0;i<tc;i++) {
                string str;
//            while (getline(cin, str)) {
                getline(cin, str);

                //cout << str << endl;
                //ss.insert(str);
                vs.push_back(str);
            }

            sort(vs.begin(), vs.end());
            for (auto it = vs.begin(); it != vs.end(); it++) {
                cout << *it << endl;

        }
    }
    return 0;
}
