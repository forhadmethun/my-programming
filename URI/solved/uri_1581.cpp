#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    int tc;
    scanf("%d\n",&tc);
    while(tc--){
        int n;
        scanf("%d\n",&n);
        set<string> ss;
        string ans = "";
        string str;
        for(int i=0;i<n;i++){
            int c = 0;
            getline(cin,str);
            ss.insert(str);

        }
     //   cout <<" --------> sizd doesn't matter:"<< ss.size() << endl;
        if(ss.size()>1){
            cout << "ingles" << endl;
        }
        else{
            cout << str  << endl;
        }
    }
    return 0;


}
