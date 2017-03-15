#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    //uri 1262
    string str;
    int n;
    while(getline(cin,str)){
        scanf("%d\n",&n);

        //cout << str <
        // < "-- > " << n <<  endl;
        string temp="";
        int sum = 0;
        bool getR = true;
        for(int i=0;i<str.length();i++){

            if(str[i] == 'W'){
                sum++;
                getR = true;
                temp = "";
            }
            else{
                if(getR){
                    sum++;
                    getR = false;
                }
                temp+="R";
                if(temp.length() == n){
                    temp = "";
                    getR = true;
                }



            }

        }
        cout << sum <<  endl;
    }

    return 0;
}
