#include<bits/stdc++.h>
using namespace std;

int main()
{
    //uri 1277
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    int tc;
    scanf("%d\n",&tc);
    while(tc--){
        int n;
        scanf("%d\n",&n);
        vector<string> name;
        for(int i=0;i<n;i++){
            string str;
            cin >> str;
            name.push_back(str);
        }
        vector<string> presence;
        for(int i=0;i<n;i++){
            string str;
            cin >> str;
            presence.push_back(str);
        }
//         for(int i=0;i<n;i++){
//        //            string str;
//          //          cin >>
//             cout <<tc <<  "--> "<<  name[i] << endl;
//
//      }
        bool forFirstTime = true;
        for(int i=0;i<n;i++){

            float p=0,a=0, m = 0;
            string result = presence[i];
            int len = result.size();
            for(int j=0;j<len;j++){
                if(result[j] == 'P'){
                    p++;
                }
                else if(result[j] =='A'){
                    a++;
                }
                else if(result[j] == 'M'){
                    m++;
                }
            }
            len = len - m;
            float per = (p/(float)len) * 100;




            if( per<75){
               // cout << name[i]<<per << " ";
                if(forFirstTime){
                    cout << name[i];
                    forFirstTime = false;
                }
                else{
                    cout << " " << name[i];
                }
               // cout << " " <<  name[i];
            }

        }
        cout << endl;


    }
    return 0;


}
