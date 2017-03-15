#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s) && s[0]!='0'){
               /* cout<<s<<endl;
                int l=s.length();
                cout<<l<<endl;
                int k=s.size();
                cout<<k<<endl;*/
                int length = s.length(),sum=0;
                //cout<<s[0]<<endl;
                for(int i=0,l=length;i<=length-1;i++,l--){
			sum+=((int)(pow(2,(double)(l)))-1)*(s[i]-'0');
			//cout<<(pow(2,(double)(l)))*(s[i]-'0')<<endl;
                }
                cout<<sum<<endl;
	}


	return 0;
}
