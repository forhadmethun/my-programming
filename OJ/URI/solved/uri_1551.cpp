
#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //1551
    map<char,bool> mcb;

    int n;
    scanf("%d\n",&n);
    while(n--){
        string str;
        getline(cin,str);
        //cout << str << endl;
        for(int i=0;i<26;i++){
            mcb['a'+i] = true;
        }


        int count = 0;
        for(int i=0;i<str.length();i++){
           // cout << "str[i]: " << str[i] << "-->bool: " << mcb[str[i]] << endl;
            if(mcb[ str[i] ] == true){
                mcb [ str[i] ] = false;
                count++;
            }
        }
        if(count ==26){
            cout << "frase completa" << endl;
        }
        else if(count>=13){
            cout <<"frase quase completa" << endl;
        }
        else{
            cout << "frase mal elaborada" << endl;
        }
      //  cout << count << endl;

    }

    return 0;
}
