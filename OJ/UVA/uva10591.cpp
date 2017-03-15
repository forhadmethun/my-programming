#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<conio.h>
//#include<sstream>
using namespace std;

unsigned long long  sumSquareDigit(char  a[]){
	unsigned long long int x=0;
	while(a[++x]);

        unsigned long long  sum = 0;
        for(int i = 0; i<x; i++){
                sum+= (a[i]-48)*(a[i]-48);
        }
      //  cout<<"\t\t"<<sum<<"\t\t"<<endl;
       return sum;
}


int main()
{

	int input ;
	cin>>input;
	for(int i =1;i<=input;i++)
		{
		char a[15],aa[15];
		cin>>a;
		strcpy(aa,a);
		sumSquareDigit(a);       unsigned long long  p =0;
		vector<unsigned long long int> v;
		//v.push_back(itoa());
		while(1){
		if(sumSquareDigit(a)==1){
			printf("Case #%d: %s is a Happy number.\n",i,aa);
			break;

		}
		/*
		else if(sumSquareDigit(a) == atoi(aa)){
			printf("Case #%d: %s is an Unhappy number.\n",i,aa);
			break;
		}*/
		else{
			unsigned long long
			int d = sumSquareDigit(a);
			for(int k=0;k<v.size();k++){
				if(d==v[k]){
					printf("Case #%d: %s is an Unhappy number.\n",i,aa);
					//break;
					p  = 1;
				}
			}
			if(p==1)break;
			v.push_back(d);






			itoa(d,a,10);


			}

		}

	}
    return 0;
}
//printf("",);
//printf("",);
//printf("",);







