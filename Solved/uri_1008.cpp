#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int employee_num;
    float hours;
    float amount;
    //printf("enter salary: ......");
    scanf("%d %f %f",&employee_num,&hours,&amount);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",employee_num,hours*amount);

    return 0;
}
