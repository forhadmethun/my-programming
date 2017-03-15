#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    double b,d,n,i,m,p,q;
    cin>>n;char a[6],c,cc,a1,b1;int x,y,z;
    for(i=1;i<=n;i++)
    {
        //while(scanf("%lf%c%lf",&a&c&b)==2 || scanf("%lf%c",&a,%c))
        //while(cin>>a>>c>>b>>cc || cin>>a>>c)
        scanf("%s",a);

            if(strlen(a)==4){
                    x=a[0]-'0';
            y=a[2]-'0';
            q=double(y);
            p=double(x);
           // cout<<y<<" "<<x<<endl;
            //m=0.5*(double(a[0]-48))+0.05*(double(a[0]-48));}
            m=0.5*p+0.05*q;}
            else{
                   // http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
                 x=a[0]-'0';
           // y=a[2]-'0';
            q=double(y);

           p=double(x);
                 m=0.5*p;
            }
            //else  m=0.5*(double(a[0]-48));
            printf("Case %.0lf: ",i);
            cout<<m<<endl;



    }


    return 0;
}
