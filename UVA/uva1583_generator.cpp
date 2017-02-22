#include<iostream>
#include<stdio.h>
//#include<string.h>
using namespace std;
int main()
{
    //char a[1000000];
    int i,k,n,l,s,ss,ii,a;
    scanf("%d",&n);
    //getchar();
    while(n--)
    {
        cin>>a;
        s=a;l=0;
        while(a!=0)
        {
            a=a/10;
            l++;
        }
        //cout<<l<<endl;
        /*gets(a);
        l=strlen(a);
        s=0;
        for(j=0;j<l;j++){
            s=s*10+a[j]-48;
        }*/
       // cout<<s<<endl;
        //k=s/2;
        for(i=s-l*9;i<s;i++)
        {
            ss=i;
            ii=i;
            while(ii!=0){
                ss+=ii%10;
                //cout<<"ss:"<<ss<<endl;
                ii=ii/10;

            }
            //cout<<"ss"<<ss<<endl;
            if(ss==s)break;
        }
        if(i==s)cout<<0<<endl;
        else cout<<i<<endl;

    }



    return 0;
}

