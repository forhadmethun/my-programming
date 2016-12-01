#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int input;
    scanf("%d",&input);
    cout<<input/3600<<":"<< (input/60)%60<<":"<<input %60 <<endl;

    return 0;
}
