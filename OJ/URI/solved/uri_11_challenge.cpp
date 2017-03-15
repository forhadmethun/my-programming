#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

string int_to_string(int x)
{

    string s = "";
    while(x!=0){
        s+= ( x%10 + '0');
        x = x/10;
    }
    return s;
}

int highest_number_with_digits_of(int x)
{
    string s = int_to_string(x);
    //cout <<"it is s: " <<  s << endl;
    sort(s.rbegin(),s.rend());
    return atoi(s.c_str());

}

int lowest_number_with_digits_of(int x)
{
    string s = int_to_string(x);
    //cout << " it is just for test    " <<  s.c_str() << endl;
    sort(s.begin(),s.end());

    return atoi(s.c_str());


}

int krapekar(int X) {

   int cnt = 0;

   while (X != 6174) {

       int hi = highest_number_with_digits_of(X);
       cout << "hi : " << hi << endl;

       int lo = lowest_number_with_digits_of(X);
       cout <<  "lo: " << lo << endl;

       X = hi - lo;

       cnt = cnt + 1;

   }

   return cnt;

}

int main()
{
    /*
    int x = 123455;
    cout << int_to_string_r(x) << endl;
    cout << int_to_string_s(x) << endl;


        cout <<"what the hell" ""  ;
        int ss =  lowest_number_with_digits_of(12353);
        cout << "ss " << ss << endl;
    */
    int x = highest_number_with_digits_of(0001);
    int y = lowest_number_with_digits_of(543251) ;
    cout << "x: " << x  << " y: " << y << endl;
    cout << krapekar(3524) << endl;

    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int p ;
    for(int i=1;i<=n;i++){
           scanf("%d",&p) ;
            printf("Caso #%d: %d\n",i,krapekar(p));
    }


    return 0;
}
