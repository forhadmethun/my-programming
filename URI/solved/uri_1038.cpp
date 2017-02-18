#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float a[6];
    a[0] = 4.00;
    a[1] = 4.50;
    a[2] = 5.00;
    a[3] = 2.00;
    a[4] = 1.50;
    int x;
    float y;
    cin>>x>>y;
    printf("Total: R$ %.2f\n",y*a[x-1]);
    return 0;
}
