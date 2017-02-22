#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100];double b,c,d,e,l,n,s,x,xx;int i,j;
    cin>>n;
    getchar();
    while(n--)
    {
        s=0;
        gets(a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='C'){
                x=1.0;xx=0;

                for(j=i+1;j<l;j++)
                {

                    if(a[j]>='0' && a[j]<='9'){
                        xx=(xx*10+(a[j]-48));
                        i++;x=xx;
                    }

                    else break;

                }
              //  if(i+1==l)x=1;
                //cout<<x<<endl;
                s+=12.01*x;
              //  cout<<"C"<<x<<":"<<s<<endl;

            }
            else if(a[i]=='O')
            {
                x=1.0;xx=0;

                for(j=i+1;j<l;j++)
                {

                    if(a[j]>='0' && a[j]<='9'){
                        xx=(xx)*10.0+double(a[j]-48);
                        i++;x=xx;
                        //cout<<x<<" ";
                    }
                   /*   else if(a[j]=='C'|| a[j]=='N'||a[j]=='H'){
                        x=1;
                    }
                    else break;*/
                }
                //i++;
                //cout<<x<<endl;
               s+=16.00*x;
              // cout<<"O"<<x<<":"<<s<<endl;


            }
            else if(a[i]=='N'){

                x=1.0;xx=0;

                for(j=i+1;j<l;j++)
                {

                    if(a[j]>='0' && a[j]<='9'){
                        xx=(xx)*10.0+double(a[j]-48);x=xx;
                        i++;
                    }
                     /* else if(a[j]=='O'|| a[j]=='C'||a[j]=='H'){
                        x=1;
                    }*/
                    else break;
                }
               // cout<<x<<endl;
               s+=14.01*x;
              // cout<<"N"<<x<<":"<<s<<endl;

            }
            else if(a[i]=='H'){
                x=1.0;xx=0;

                for(j=i+1;j<l;j++)
                {

                    if(a[j]>='0' && a[j]<='9'){
                        xx=(xx)*10.0+double(a[j]-48);
                        i++;x=xx;
                       // cout<<x<<endl;
                    }
                    /*  else if(a[j]=='O'|| a[j]=='N'||a[j]=='C'){
                        x=1;
                    }*/
                    else break;
                }
              //  cout<<x<<endl;
                s+=1.008*x;
                //cout<<"H"<<x<<":"<<s<<endl;

            }



        }
       //cout<<s<<endl;
       printf("%.3lf\n",s);


    }




    return 0;
}
