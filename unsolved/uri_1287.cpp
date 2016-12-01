#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

int main()
{
    //houa uchit chilo -_-
    //uri 1287
  //  freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    string str;
    while(getline(cin,str)){
        string temp="";
        int len = str.length();
        for(int i=0;i<len;i++){
            if(str[i] == 'o' || str[i] == 'O'){
                //str[i]+='0';
                temp+='0';
            }
            else if(str[i]>='0' && str[i]<='9'){
                temp+=str[i];
            }
            else if(str[i] == 'l'){
                temp+='1';
            }
        }
        if(temp == "" || temp.length()>=11){
            cout << "error" << endl;
        }
        else{
            //long ans = stol(temp);l
            long long ans = stoll(temp);
            if(ans>2147483647){
                cout << "error" << endl;
            }
            else
            cout << ans << endl;
        }
    }

    return 0;
}
