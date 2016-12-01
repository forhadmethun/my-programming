#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float a[6];
    int sum = 0;
    for(int i=0;i<6;i++){
            cin>>a[i];
            if(a[i]>0)sum++;
    }
    printf("%d valores positivos\n",sum);


    return 0;
}
