#include<bits/stdc++.h>
using namespace std;

int main()
{

    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    // freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    //uri 2157
    int tc;
    scanf("%d\n",&tc);
    for(int i=0;i<tc;i++){
        int a,b;
        cin >> a >> b;
        string str = "";
        for(int i=a;i<=b;i++){
            str+=to_string(i);
        }
        string temp(str);
        reverse(temp.begin(),temp.end());
        cout << str << temp << endl;
    }

    return 0;
}
