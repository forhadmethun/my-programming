#include<bits/stdc++.h>
using namespace std;

int main()
{

    freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\in.txt","r",stdin);
    // freopen("D:\\googleDrive\\_CSE\\_dayWise_work\\2016\\july_august_september_oct_nov_dec\\Oct\\URI_BEGINNER\\out.txt","w",stdout);
    //uri 1803

    string arr[4];
    getline(cin,arr[0]);
    getline(cin,arr[1]);
    getline(cin,arr[2]);
    getline(cin,arr[3]);

    int len = arr[0].length();
    string f = "";
    f+=arr[0][0];
    f+=arr[1][0];
    f+=arr[2][0];
    f+=arr[3][0];

    string l = "";
    l+= arr[0][len-1];
    l+= arr[1][len-1];
    l+= arr[2][len-1];
    l+= arr[3][len-1];


   // cout << "f: " << f << "--> "<< l << endl;
    int F = stoi(f);
    int L = stoi(l);


    for(int i=1;i<len-1;i++){
        l = "";
        l+= arr[0][i];
        l+= arr[1][i];
        l+= arr[2][i];
        l+= arr[3][i];

        int m = stoi(l);


        //cout << l << endl;
        printf("%c",(F*m + L)%257);

    }
    cout << endl;




    return 0;
}
