#include<iostream>
using namespace std;

int a[1000000];

int main(int argc, char const *argv[])
{
	long long n;
	while((cin>>n) && n != 0)
	{
		for(int i=2;i <1000000;i++){
			for(int j=2; i*j < 1000000 && a[i] != 1;j++){
				a[i*j] = 1;
			}
		}
		/*
		for(int i=2;i <100;i++){
			if(a[i] != 1)cout<<i << endl;
		} */
		int x = 0;
		int p = 0;
                for(int i=3; i<n ;i++){
				if(a[i] == 0){
					for(long  j = n ;j>=3; j--){
						if(a[j]==0 && i+j==n){
							//if(i+j == n){
								cout << n <<" = " <<i <<" + " <<j<<endl;
								x=1; p =1;
								break;
							//}
						}
					}
				}
				if(x==1)break;

                }
                if(p==0)cout<< "Goldbach's conjecture is wrong." <<endl;

	}
	return 0;
}
