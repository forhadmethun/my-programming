#include<bits/stdc++.h>
using namespace std;
void fn(string str,string strtag,string rep)
{
    int i=0;
    while(str[i] !='\0')
    {

        int chk=1,j=0;
        while(chk)
        {
            if(strtag[j]=='\0') break;
            //chk=str[i+j]-strtag[j];
            if(str[i+j] == strtag[j]){
                chk = 1;
            }
            else chk = 0;

            j++;
        }

        if(j==strtag.size()){
            j=rep.size();
            for(int k=0;k<j;k++)str[i+k]=rep[k];
            i+=(j-1);
        }



        //cout << "working " << endl;
        i++;
    }
}
int main()
{
    freopen("in.txt","r",stdin);

        string str1,str2,str3;
        while(getline(cin,str1) !=NULL){
        getline(cin,str2);
        getline(cin,str3);
        fn(str3,str1,str2);
        cout << str3 << endl;
        }

}
