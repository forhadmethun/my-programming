#include<bits/stdc++.h>
using namespace std;
int min(int a,int b )
{
	if(a<b)return a;
	else return b;
}
int main()
{
	freopen("in.txt","r",stdin);
	int n;
	string a,b;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		//getline(cin,a);
		string xx;
		getline(cin,xx);
		stringstream ss;
		ss << xx;
		ss >> a;
		ss >> b;
		int la = a.size();
		int lb = b.size();
		if(la<lb){
			cout << "nao encaixa" << endl;
			continue;
		}
		
		
		//cout << " baaaaaaaaa a: "  << la << " b: " << lb << endl;
		
		int x = min(la,lb);
		//cout << "MIN " << x <<endl;
		la--;
		lb--;
		int temp = 1;
		for(int i =0;i<x;i++){
			//cout << "\ta: " << a[la] << " b:" << b[lb] << endl;
			if(a[la--] != b[lb--])temp = 0;
		
			//else temp = 0;
		}
		if(temp ==1)cout << "encaixa" << endl;
		else cout << "nao encaixa" << endl;
		
		
	}
	return 0;
}
