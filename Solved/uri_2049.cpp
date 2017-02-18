#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    string str1,str2;
    int tc = 1;
    //cout <<"test" <<endl;
    int count = 0;
    while(getline(cin,str1)){

        if(str1 == "0")break;
        if(count ==0){
            count++;
        }
        else{
            cout << endl;
        }

        getline(cin,str2);
        printf("Instancia %d\n",tc++);
       // cout << "------------------> " << str2.find(str1) << endl;
        if(str2.find(str1) != string::npos){
            cout << "verdadeira" << endl;
        }
        else{
            cout << "falsa" << endl;
        }



    }
    return 0;
}