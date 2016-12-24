using namespace std;
#include<bits/stdc++.h>
char toLower(char ch)
{
    if(ch >='A' && ch <='Z'){
        return 'a' + (ch - 'A');
    }
    else return ch ;
}
int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);

    string str;
    while(getline(cin,str) && str!="*"){
        stringstream ss(str);
        string temp;
        set<char> sc;
        while(ss >> temp){
            sc.insert(toLower(temp[0]));
        }
        if((int)sc.size()>1){
            printf("N\n");
        }
        else{
            printf("Y\n");
        }
    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1140
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
