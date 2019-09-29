#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    double  i,j,n;
    while(cin>>i>>n)
    {/*

            for(j=1;j<n;j++)
        {
            k=pow(j,i);
            if(k>=n)break;

        }*/
        j=pow(n,1/i);
        //cout<<j<<endl;
         printf("%.0lf\n",j);
    }


    return 0;
}
