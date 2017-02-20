#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i;double a;
    i=1;
    cin>>a;
    while(a!=0){
    a=ceil((sqrt(8*a+9)+3)/2);
    printf("Case %d: %.0lf\n",i,a);
    cin>>a;
    i++;
    }



    return 0;
}

