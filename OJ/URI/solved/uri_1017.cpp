#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float distance,hour;
    scanf("%f %f",&distance,&hour);
    printf("%.3f\n",distance*hour*(1.0/12.0));

    return 0;
}
