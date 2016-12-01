#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int employee_num;
    string name;
    getline(cin,name);
    double hours;
    double amount;

    scanf("%lf %lf",&hours,&amount);
    printf("TOTAL = R$ %.2lf\n",hours+amount*.15);

    return 0;
}
