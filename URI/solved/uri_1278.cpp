#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

int main()
{
    //uri 2078
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    int tc;
    int x = 0;
    while(scanf("%d\n",&tc) == 1 && tc) {
        if(x>0)cout << endl << endl;
        x++;
        // if(tc == 0) return 0;
        vector<vs > vvs(tc,vs());
        for(int i=0;i<tc;i++) {
            string str; //= "   i fuck you... hardly             you naughty girl ";
            getline(cin, str);
            stringstream ss(str);
            string temp;
            while (ss >> temp) {
                //cout << temp << endl;
                vvs[i].push_back(temp);
            }

        }

        vector<string> vs;
        for(int i=0;i<vvs.size();i++){

            string s= "";
            for(int j=0;j<vvs[i].size();j++){
                //cout << vvs[i][j] << " ";
                if(j>0)s+=" ";
                s+=vvs[i][j];
            }
            vs.push_back(s);
            //cout <<s << endl;
        }
        int len_max = -10000;
        for(int i=0;i<vs.size();i++){
            //   cout <<  "---------------------------> " << vs[i].length() << endl ;

            if( (int) vs[i].length() > len_max){
                //cout << "duksii " << endl;
                len_max = vs[i].length();
            }
        }

        string format = "%" + to_string(len_max) + "s";
        // cout << "  --> " << format << endl;
        for(int i=0;i<vs.size();i++){

            //cout << vs[i] << endl ;
            if(i>0)cout << endl;
            printf(format.c_str(),vs[i].c_str());


        }
        //cout << len_max << endl;
        // cout <<  endl;


    }
    cout << endl;


    return 0;
}
