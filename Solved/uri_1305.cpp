#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    double first,second;
    while(scanf("%lf%lf",&first,&second) == 2){
        int x = (int) first;
        double precision = first - (double) x;
        if(precision > second){
            cout <<(int)  ((first) +1) << endl;
        }
        else{
            cout << (int)first << endl;
        }
    }


    return 0;
}