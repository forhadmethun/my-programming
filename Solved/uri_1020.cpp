#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int input;
    scanf("%d",&input);
    //cout<<input/3600<<":"<< (input/60)%60<<":"<<input %60 <<endl;
    int x = input / 365;
    int month = (input - (x*365))/30;
    int  day  = input  -(x*365) -( month)*30;

    printf("%d ano(s)\
\n%d mes(es)\
\n%d dia(s)\n",x,month,day);
    return 0;
}
