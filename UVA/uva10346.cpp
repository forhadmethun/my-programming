#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	long long  n,k;
	while(cin>>n>>k){
		int number,b=0,s=n;
		/*
		while(n>=1){
			sum+=n;
			butt+=n;
			n=butt/k;
			butt=n%k;

		} */
		while(1){
			b=n/k;
			s+=b;
			n=n%k+b;
			if(n<k)break;

		}
		//printf("%d\n",s);




		//printf("%d\n",sum);
		cout<<s<<endl;
	}

	return 0;
}
