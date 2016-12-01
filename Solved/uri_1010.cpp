#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n1,n2;
    float p1,p2,m1,m2;
    scanf("%d %f %f %d %f %f",&n1,&p1,&m1,&n2,&p2,&m2);
    printf("VALOR A PAGAR: R$ %.2f\n",p1*m1 + p2*m2);


    return 0;
}
