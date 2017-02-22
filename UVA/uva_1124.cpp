#include<stdio.h>

#include<iostream>
using namespace std;

int main()
{
    //cout << "test "<< endl;
    //fi
    string s;
     //int temp = 1;
    while(getline(cin,s))
    {
        /*
        F(i,s.length()){
            if(temp%2 == 1 && s[i] == '"' )
            {
                temp++;
                cout<< "``" ;
            }
            else if(temp%2 == 0 && s[i] == '"'){
                temp++;
                cout << "''" ;
            }else{
            cout << s[i];

            }

        }
        cout << endl;*/

        //cout << s << endl;
        printf("%s\n",s.c_str());
    }



    return 0;
}
