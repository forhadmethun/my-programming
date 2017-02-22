#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,i,jj,p,m,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        m=0,j=0;
        for(jj=1;jj<=a;jj++)
        {
            cin>>p;
            //for miley
            //if(p%60 <30)
            //{
                m+=(p/60)*(20)+(p%60<30?10:20);
            //}

            //for juice
            j+=((p/60)+1)*15;
       // }


        }
        //cout<<"m:"<<m<<endl;
        //cout<<"j:"<<j<<endl;
        if(m<j)
        {
            printf("Case %d: Mile %d\n",i,m);


        }
        if(j<m)
        {
            printf("Case %d: Juice %d\n",i,j);


        }
        if(j==m)
        {
            printf("Case %d: Mile Juice %d\n",i,j);
        }
    }


    return 0;
}

