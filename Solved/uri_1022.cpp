
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int pos(int x){
if(x<0)return -x;
}

int main()
{
    freopen("in.txt","r",stdin);

    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int N1,D1,N2,D2;
        char sentence [20];//="Rudolph is 12 years old";
        gets(sentence);
        char str [20];
        int i;

        sscanf (sentence,"%d  %*c  %d  %*c %d %*c %d",&N1,&D1,&N2,&D2);
        ///1 / 2 + 3 / 4
        /*
        cout << "n1: " << N1 <<endl;
        cout << " n2: " << N2<< endl;
        cout <<  " d1: " << D1 <<endl; ;
        cout << " d2" << D2 << endl;
        */
        //cout << "test: " << gcd(10,8) << endl;
        if(sentence[6] == '+'){
            int n = (N1*D2 + N2*D1) ;
            int d = (D1*D2);
            cout << n << "/" << d << " = " << (n/gcd(n,d)) << "/" << (d/gcd(n,d)) << endl;
        }
        else if(sentence[6] == '-'){
            int n = (N1*D2 - N2*D1) ;
            int d = (D1*D2);
            cout << n << "/" << d << " = " << (n/gcd(pos(n),d)) << "/" << (d/gcd(pos(n),d)) << endl;
        }

        else if(sentence[6] == '*'){
            int n = (N1*N2);
            int d = (D1*D2);
            cout << n << "/" << d << " = " << (n/gcd(n,d)) << "/" << (d/gcd(n,d)) << endl;
        }
        else if(sentence[6] == '/'){
            int n = (N1*D2);
            int d = (D1*N2);
            cout << n << "/" << d << " = " << (n/gcd(n,d)) << "/" << (d/gcd(n,d)) << endl;
        }


    }

    return 0;
}
