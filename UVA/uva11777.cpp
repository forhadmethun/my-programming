#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //float a,i,n,b,c,d[3],e[3],s=0,y,z,sum,av,em;
    //int j,f;
    int i,n;
    cin>>n;
    //while(cin>>n)

        for(i=1;i<=n;i++){
            float a,b,c,d[3],e[3],s=0,y,z,sum,av,em;int j,f;
            cin>>a>>b>>c>>em;
            for(j=0;j<3;j++){
                cin>>d[j];
            //    cout<<d[j];
            }
            for(j=0;j<3;j++){
                if(d[j]>s){
                        s=d[j];
                        f=j;
            }
            }
            y=s;

            s=0;
            d[f]=0;
            for(j=0;j<3;j++){
                if(d[j]>s){
                        s=d[j];
                        f=j;
            }
            }
            z=s;
            av=(y+z)/2;
            av=av+a+b+c+em;



            //cout<<av<<endl;
            if(av>=90)printf("Case %d: A\n",i);
            else if(av>=80&&av<90)printf("Case %d: B\n",i);
            else if(av>=70&&av<80)printf("Case %d: C\n",i);
            else if(av>=60&&av<70)printf("Case %d: D\n",i);
            else printf("Case %d: F\n",i);




        }
    //}





    return 0;
}
