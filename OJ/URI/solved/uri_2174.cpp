#include<bits/stdc++.h>
using namespace std;

int main()
{

    //uri 2174
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    int tc;
    scanf("%d\n",&tc);
    set<string> ss;
    while(tc--){
        string str;
        getline(cin,str);
        ss.insert(str);

    }
    printf("Falta(m) %d pomekon(s).\n",151-(int) ss.size());


    return 0;
}
