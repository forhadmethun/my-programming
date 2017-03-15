#include<bits/stdc++.h>
using namespace std;
/// x ==0 capital
/// x = 1 small
int main()
{
    freopen("in.txt","r",stdin);

    string s;

    while(getline(cin, s)!=NULL)
    {
        int x=0;

        for(int i=0;i<s.size();i++){

            if((s[i] >='A' && s[i] <='Z')){
                if(x==0){
                    cout << s[i] ;
                    x = 1;
                }
                else{
                    printf("%c", s[i] -'A' + 'a');
                    x= 0;
                }
            }
            else if( s[i]>='a' && s[i]<='z'){
                if(x==0){
                    printf( "%c",s[i] -'a' + 'A');
                    x = 1;
                }
                else{
                    cout << s[i];
                    x = 0;
                }
            }
            else if(s[i] ==' '){
                cout << " " ;
            }
        }
        cout << endl;

        //cout << s << "size:            " << s.size() << endl;


    }
    return 0;
}
