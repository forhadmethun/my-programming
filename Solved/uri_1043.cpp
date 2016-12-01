#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    float s = (x+y+z)/2.0;
    if(x+y>z && y+z>x && x+z >y )
    {

        printf("Perimetro = %.1f\n",s*2);
    }
    else printf("Area = %.1f\n",((x+y)*z)/2.0);


    return 0;
}
