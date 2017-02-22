#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    freopen("in.txt","r",stdin);
    int t;
    char str[130];

    cin >> t;

    getchar();
    while(t--)
    {
        stack<char> stk;

        gets(str);
        /*
        bool isTrue = true;
        if(strlen(str) %2 ==1){
            cout << "No" << endl;
            continue;
        }*/
        for(int i=0;str[i];i++)
        {   /*
            if(str[i]== '('){
                stk.push(str[i]);
                continue;}
            else if(str[i] == '['){
                    stk.push(str[i]);
                continue;
            }
            if(str[i] == ']'){
                if(stk.empty()){
                    isTrue = false;
                    break;
                }
                char ch = stk.top();
                stk.pop();
                if(ch != '['){
                    isTrue = false;
                    break;
                }
            }else if(str[i] == ')'){
                if(stk.empty()){
                    isTrue = false;
                    break;
                }
                char ch = stk.top();
                stk.pop();
                if(ch != '('){
                    isTrue = false;
                    break;
                }

            }*/
           if( (!stk.empty() && str[i] ==')' && stk.top() == '(' ) || (!stk.empty() && str[i] ==']' && stk.top() == '[' ))
           {
               stk.pop();
           }else stk.push(str[i]);

        }
        if(stk.empty())cout << "Yes" << endl;
        else cout << "No" << endl;
        /*

        if(isTrue == true)cout << "Yes" << endl;
        else cout << "No" << endl;
        */
            //cout << str << endl;



    }
    return 0;
}
