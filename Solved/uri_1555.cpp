#include<bits/stdc++.h>
using namespace std;
//int mx(int x,y,z)
int c(int x,int y)
{
	return ( -(100) *(x) ) + y*y*y;
}

int bx(int x,int y)
{
	return 2*(x*x)  + 25*y*y;
	
}
int r(int x, int y)
{
	return (9*x*x)  + y*y;
}


int main()
{
	int T;
	freopen("in.txt","r",stdin);
	cin>>T;
	while(T--)
	{
		int a, b;
		cin>>a >>b;
		int cc = c(a,b);
		int rr = r(a,b);
		int bb = bx(a,b);//)))
		//cout << "cc: " << cc << " bb: "  << bb << " rr: " << rr << endl;
		if(cc > rr && cc > bb)cout << "Carlos ganhou"<<endl;
		else if(rr> cc && rr > bb)cout << "Rafael ganhou"<<endl;
		else cout << "Beto ganhou"  << endl;
			
	}
	
	return 0;
}
