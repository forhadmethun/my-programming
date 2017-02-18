#include<bits/stdc++.h>
using namespace std;

int main()
{

    //uri 1556
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    string str;
    while(getline(cin,str)){
        set<string> ss;
        int len = str.length();

        for(int i=0;i<(1<<len);i++){
            string temp = "";
            for(int j=0;j<len;j++){
                if(i&(1<<j)){
                    temp+=str[j];
                    //cout << str[j];
                }
            }
           // cout << endl;
           // sort(temp.begin(),temp.end());
            if(temp!="")ss.insert(temp);
            //cout << temp << endl;
            temp="";

        }
        for(auto it=ss.begin();it!=ss.end();it++){
            cout << *it << endl;
        }

        cout << endl;

    }

    return 0;
}
