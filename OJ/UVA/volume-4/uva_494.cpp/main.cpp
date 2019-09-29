#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;// = "abc def ghi";
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\_Contest\\_iamfake\\_june\\uva_494.cpp\\in.txt","r",stdin);

    while(getline(cin,str)) {
        string temp ="";

        for (int i = 0; i < str.length(); i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                temp+=str[i];
                //temp++;
                //ase = true;
                // break;
            }else{
                temp+= " ";
            }
        }

        stringstream ss(temp);

        string token;

        int len = 0;

        while (ss >> token) {
            //printf("%s\n", token.c_str());
            //int l = token.length();
            //int temp = 0;
            //bool ase = false;


          // if() {
              // cout << token << endl;
               len++;
          // }
            /*
            if (temp != 0) {
                len++;
            }*/
        }
        cout << len << endl;
    }


return 0;
}