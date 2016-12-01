#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    //uri 1248
    /*
     * algorithm:
     * for each test case
     *  take input of the first line and insert every character into a map of boolean and make the boolean false
     *  then for next two line check that all the characters are in the previous taken map and make them true if not true
     *  if true is found then make cheater
     *  else find the map of the character for false and print them
     *
     */

    int tc;
    scanf("%d\n",&tc);
    while(tc--){
        string str1,str2,str3;
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
        map<char, bool> map_char_bool;
        int len1 = str1.length();
        for(int i=0;i<len1;i++){
            map_char_bool[str1[i]] = false;
        }
        bool cheater =  false;
        for(int i=0;i<str2.length();i++){
            //see if in the map
            if(map_char_bool.count(str2[i]) == 0){
                cheater = true;
            }
            //check if it is false the make visited
            else if(map_char_bool[str2[i]]  == false ){
                map_char_bool[str2[i]] = true;
            }
           else if(map_char_bool[str2[i]] == true){
                cheater = true;
            }
        }
        for(int i=0;i<str3.length();i++){
            //see if in the map
            if(map_char_bool.count(str3[i]) == 0){
                cheater = true;
            }

            //check if it is false the make visited
            else if(map_char_bool[str3[i]]  == false ){
                map_char_bool[str3[i]] = true;
            }
           else if(map_char_bool[str3[i]] == true){
                cheater = true;
            }
        }
        if(cheater){
            cout << "CHEATER" << endl;

        }
        else{
            for(map<char,bool>::iterator it = map_char_bool.begin();it!=map_char_bool.end();it++){
                if(it->second == false){
                    cout << it->first ;
                }

            }
            cout << endl;

        }



    }

    return 0;
}
