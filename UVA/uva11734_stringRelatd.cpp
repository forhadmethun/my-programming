#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,l,ll,i=0,m,mm,ii=0,x=0,xx=1;char a[100],b[100],c[100];
    cin>>n;
    getchar();
    while(n--)
    {
        xx=1;
        ii++;

        gets(a);
        l=strlen(a);
        mm=m=0;
        gets(b);
        ll=strlen(b);
        x=0;
        for(i=0;i<l;i++){
                if(a[i]==32){
                    continue;
                }
                else{
                    c[x]=a[i];
                    x++;
                }

        }
       /* xx=strcmp(c,b);
        cout<<x<<endl;*/
        for(i=0;i<ll;i++){
            if(b[i]!=c[i]){
                xx=0;
                break;
            }
        }

        //cout<<xx<<endl;

       // cout<<"c"<<c<<endl;

       // getchar();
       //cout<<"a:"<<a<<endl;
      // cout<<"b:"<<b<<endl;

       //cout<<"c:"<<c<<endl;
       /* for(i=0;i<l;i++){
            if(a[i]==32)mm++;
        }
        for(i=0;i<ll;i++){
            if(b[i]==32)mm--;
            //cout<<"c:"<<c[i]<<endl;
        }*/
       if(strcmp(a,b)==0)printf("Case %d: Yes\n",ii);
        else if(xx==1)printf("Case %d: Output Format Error\n",ii);
        else printf("Case %d: Wrong Answer\n",ii);




    }


    return 0;
}
