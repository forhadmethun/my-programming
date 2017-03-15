#include<bits/stdc++.h>
using namespace std;

int main(){
    //uri 1898
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    string str1,str2;
    string ans1 = "",ans2 = "";
    string ans1_extra = "";
    cin>> str1 >> str2;


    for(int i=0;i<(int) str1.length();i++){
        if(str1[i]>='0' && str1[i] <='9' || str1[i] == '.'){
            if((int)ans1.length()<11)
            ans1+=str1[i];
            else{
                ans1_extra+=str1[i];
            }
        }
    }
    for(int i=0;i<(int)str2.length();i++){
        if(str2[i]>='0' && str2[i] <='9' || str2[i] == '.'){
            ans2+=str2[i];
        }
    }
    double d1 = (double)((floor)(stod(ans1_extra) * 100))/100;
    double d2 = (double)((floor)(stod(ans2) * 100))/100;


    cout <<"cpf "<< ans1 << setprecision(2) << fixed<<  "\n" << d1 + d2 << endl;


    return 0;
}