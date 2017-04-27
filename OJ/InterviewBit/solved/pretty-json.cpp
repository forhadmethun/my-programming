#include<bits/stdc++.h>
using namespace std;
//vector<string> prettyJSON(string A) {
vector<string>prettyJSON(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len =(int) A.size();
    int bracketCount = 0;
    string str = "";
    for(int i=0;i<len;i++) {
        if(A[i] == '[' || A[i] == '{'){
            //cout << A[i]<< endl ;//<< "\t";
            str+=A[i];
            str+="\n";
            bracketCount++;
            for(int j=0;j<bracketCount;j++){
                //cout << "\t";
                str+="\t";
            }
        }
        else if(A[i] == ',' || (A[i] == ':' && (A[i+1] == '{' || A[i+1] == '[')) ){
            //cout << A[i] << endl;
            str+=A[i];
            str+="\n";
            for(int j=0;j<bracketCount;j++){
               // cout << "\t";
                str+="\t";
            }
        }
        else if(A[i] == '}' || A[i] == ']'){

            bracketCount--;
            //cout << endl;
            str+="\n";
            for(int j=0;j<bracketCount;j++){
               // cout << "\t";
                str+="\t";
            }
           // cout << A[i] ;
            str+=A[i];
        }
        else{

            //cout << A[i];
            str+=A[i];
        }

    }
    str+="\n";
   // cout <<endl << endl;
   // cout << str << endl;

    vector<string> vs;
    string temp = "";
    for(int i=0;i<str.length();i++){
        if(str[i] == '\n'){
            vs.push_back(temp);
            temp = "";
        }
        else temp+=str[i];

    }
   // cout << "-----------------------------------------------" << endl;
    /*
    for(int i=0;i<vs.size();i++){
        cout << vs[i] << endl;// ":" << vs[i].length();// << endl;
    }
    */

    return vs;


}


int main(){
    string str = "[\"foo\", {\"bar\":[\"baz\",null,1.0,2]}]";
//    string str = "{A:\"B\",C:{D:\"E\",F:{G:\"H\",I:\"J\"}}}";
   vector<string> vs (prettyJSON(str));
    for(int i=0;i<vs.size();i++){
        cout << vs[i] << endl;
    }
    return 0;
}