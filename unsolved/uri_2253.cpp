#include<bits/stdc++.h>
using namespace std;

bool isUpper(char ch){
    if(ch >='A' && ch <='Z'){
        return true;
    }
    return false;
}
bool isLower(char ch){
    if(ch >= 'a' && ch <='z'){
        return true;
    }
    return false;
}
bool isInt(char ch){
    if(ch >= '0' && ch <='9') return true;
    return false;
}

bool isValid(char ch){
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z') ||(ch>='0' && ch <='9'))return true;
    return false;
}

int main()
{

    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    // freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    //uri 2253
    string str;
    while(getline(cin,str)){
        int len = str.length();
        bool up,lo,in,val = true;
        up = lo = in = false;
        for(int i=0;i<len ;i++){
            if(isUpper(str[i])){
                up = true;
            }
            else if(isLower(str[i])){
                lo = true;
            }
            else if(isInt(str[i])){
                in = true;
            }
            else if(!isValid(str[i])){
                val = false;
            }

        }
        if(up && lo && in && val && len>=6){
            cout << "Senha valida." << endl;
        }
        else{
            cout << "Senha invalida." << endl;
        }
    }
    return 0;
}
