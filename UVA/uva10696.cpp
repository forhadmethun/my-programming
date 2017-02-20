#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{


    //Scanner in=new Scanner(System.in);
      //  int n=in.nextInt(),x=0;
      int n,x=0;
      cin>>n;
        while(n>0)
        {
            float a,b,c,d,e,f,s;
            cin>>a>>b>>c>>d;
           /* a=in.nextDouble();
            b=in.nextDouble();
            c=in.nextDouble();
            d=in.nextDouble();*/
            s=a+b+c;
            //if ((a<=56.0 && b<=45.0 &&c<=25.0) ||(a+b+c)<=125.0)) &&d<=7.0)
            //if((a<=50 && b<=45 &&c<=25))
            //{
              //  System.out.println(1);
                //x++;

            //}
            if(d<=7.00 &&((a<=56.00 && b<=45.00 && c<=25.00)||(s<=125.0)))
            {
                   // System.out.println(1);
                   cout<<1<<endl;
                    x++;


            }
            else
            {
                //y=0;
                //System.out.println(0);
                cout<<0<<endl;
            }

            n--;
        }
        //System.out.println(x);
        cout<<x<<endl;




    return 0;
}
