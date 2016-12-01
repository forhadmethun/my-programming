#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

int main()
{
    //uri 1276
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    string str_input;
    while(getline(cin,str_input)){
        set<char> sc;
        string str = "";
        for(int i=0;i<str_input.length();i++){
            if(str_input[i] >='a' && str_input[i] <= 'z'){
               sc.insert(str_input[i]);
            }
        }
        for(auto it= sc.begin();it!=sc.end();it++){
            str+=*it;
        }
        sort(str.begin(),str.end());
        set<char> set_string;

     // cout << str << endl<<endl<<endl;
        if(str == ""){
            cout << endl;
            continue;
        }
        int len = str.length();

        string temp = "";// = ""+str[0];
        temp+=str[0];
        //cout << temp;//
        //cout << str[0];
        vector<string> vs;
        for(int i=1;i<len;i++){
            if(str[i] == (str[i-1] + 1)){
              // cout << str[i];
                temp+=str[i];

            }
            else{

                //cout <<temp <<  endl;
                vs.push_back(temp);

          //      cout <<temp<< endl;// <<str[i];
                temp = "";
                temp+=str[i];
            }
        }
        //cout << temp << endl;
       // cout << "---" << endl;
        vs.push_back(temp);
        for(int i=0;i<vs.size()-1;i++){
            //cout <<vs[i] << endl;
            if(vs[i].length() == 1&& (vs[i][0]!=' ')){
                vs[i]+=vs[i];
            }

            cout << vs[i][0]<<":"<<vs[i][vs[i].length()-1] << ", ";

        }
        int l = vs.size();
        cout << vs[l-1][0] << ":" << vs[l-1][vs[l-1].length()-1] << endl;





    }

    return 0;
}
