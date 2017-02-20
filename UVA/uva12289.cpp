#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        char a[4];
        scanf("%s",a);
        int b,c,i,j,l,s=0,m=0;
        l=strlen(a);
        if(l==5){cout<<"3"<<endl;continue;}
        if(l==3)
        {
            //if(a[0]=='o'||a[1]=='o'||)
            for(j=0;j<3;j++)
            {
                if(a[j]=='o' || a[j]=='n' || a[j]=='e')
                {
                    s++;
                    //cout<<"\ns:\n"<<s<<endl;
                }

            }
            if(s==2 || s==3)cout<<1<<endl;
            else cout<<2<<endl;
        }
        //cout<<"n:"<<n<<endl;


    }


    return 0;
}
