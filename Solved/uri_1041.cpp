#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(!x && !y) cout << "Origem" << endl;
    else if(x>0 && y>0)cout << "Q1" << endl;
    else if( x>0 && y<0) cout << "Q4" << endl;
    else if(!y) cout << "Eixo X" << endl;
    else if( x<0 && y >0)cout << "Q2" << endl;
    else if( x<0 && y<0) cout << "Q3" << endl;
    else if(!x)cout << "Eixo Y" << endl;
    return 0;
}
