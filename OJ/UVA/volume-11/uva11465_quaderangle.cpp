#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a==b&&a==c&&a==d)cout<<"square"<<endl;
        else if((a==b && d==c)||((a==c && b==d))||(a==d&&b==c))cout<<"rectangle"<<endl;
        //longer than the sum of the lengths of the other three,
        else if(a>(b+c+d)||b>(a+c+d)||c>(a+b+d)||d>(a+b+c))cout<<"banana"<<endl;
        else cout<<"quadrangle"<<endl;

    }


    return 0;
}
