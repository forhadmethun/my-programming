#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100],b[100],ca[100];
    while(scanf("%s%s",a,b))
    {
    int c,d,i,j,k,l,m,n,s=0,x,y,yo,am,sa=0,man,pam,lam;
    x=strlen(a);
    y=strlen(b);
    am=x;
    if(x==1 && x==1 && a[0]=='0' && b[0]=='0')break;
    if(x>y)
    {
        am=x;
        man=x-y;
        lam=0;
        pam=0;
        for(i=0;i<x;i++){
            if(i<man)
            {
                ca[lam]='0';
                lam++;
            }
            else{
                ca[lam]=b[pam];
                lam++;
                pam++;
            }
        }
        strcpy(b,ca);

    }
    else if(x<y){
            am=y;

        man=y-x;
        lam=0;
        pam=0;
        for(i=0;i<y;i++){
            if(i<man)
            {
                ca[lam]='0';
                lam++;
            }
            else{
                ca[lam]=a[pam];
                lam++;
                pam++;
            }
        }
        strcpy(a,ca);
    }
       /* for(i=0;i<am;i++)
        {
            //ca[man]=b[lam];
            //lam++;
            cout<<a[i];
        }
        cout<<" ";
        for(i=0;i<am;i++)
        {
            //ca[man]=b[lam];
            //lam++;
            cout<<b[i];
        }

        cout<<endl<<endl;*/

        for(i=am-1;i>=0;i--)
        {
            //printf("%d\n\n",
            m=a[i]-48+b[i]-48+sa;
          //  cout<<"m:"<<m<<" ";
            sa=0;
            if(m>=10){
                s++;
                sa++;
                //a[i-1]=a[i-1]-48+1;

            }

        }

   // cout<<endl<<"s:"<<s<<endl;
   if(s==0)printf("No carry operation.\n");
    else if(s==1) printf("1 carry operation.\n",s);
    else printf("%d carry operations.\n",s);
    }


    return 0;
}
