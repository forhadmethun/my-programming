#include<bits/stdc++.h>
using namespace std;
int main()
{

    //uri 1216
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    double counter = 0,sum = 0;
    string str;
    while(getline(cin,str)){
        double d;scanf("%lf\n",&d);
        sum+=d;
      //  cout << sum << "--" << counter << "-- " << endl;
        counter++;
    }
    cout << fixed << setprecision(1) << sum/counter <<endl;
    return 0;
}