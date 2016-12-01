#include<bits/stdc++.h>
using namespace std;
int main()
{
    //uri 1534
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    int n;
    while(scanf("%d",&n) == 1){
        string str ="";
        for(int i=0;i<n;i++){
            str+='3';
        }
        int x = 1-1;
        int z = n-1;
        for(int i=0;i<n;i++){
            str[x] = '1';
            str[z] = '2';
            cout << str << endl;
            str="";
            for(int z=0;z<n;z++){
                str+='3';
            }
            x++;
            z--;
        }
       // cout << endl;
    }

}
