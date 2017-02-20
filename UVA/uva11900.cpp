#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int ara[1000],n,p,q,i,bra[1000],s=0,j=0,m,ca,x,y,Q,z;
    cin>>ca;
    for(x=1;x<=ca;x++)
    {
    m=0;Q=0;z=0;
    cin>>n>>p>>q;
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    /*for(j=0;j<n;j++)
    {
    for(i=0;i<n;i++){
        if(ara[i]>s){
            s=ara[i];
            m=i;
            }
    }
    bra[j]=s;
    ara[m]=0;
    s=0;
    }*/
    /*for(y=1;y<=n&&y<=p;y++){
        m+=ara[i];
        if(m>q)break;
    }
         printf("Case %d: %d\n",x,y-1);
    }*/
    for(y=0,Q=0;y<n;++y){
        if(z+1<=p && Q+ara[y]<=q)
        {
            ++z;
            Q+=ara[y];
        }else break;
    }
    printf("Case %d: %d\n",x,z);
}
    return 0;
}

