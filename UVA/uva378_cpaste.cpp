#include<iostream>
#include<stdio.h>


int main()
{
   printf("INTERSECTING LINES OUTPUT\n");
   int n,x_1,x_2,x_3,x_4,y_1,y_2,y_3,y_4;
   double d,d1,d2,t1,t2,x,y;

   scanf("%d",&n);


   while(n--)
   {
      scanf("%d%d%d%d%d%d%d%d",&x_1,&y_1,&x_2,&y_2,&x_3,&y_3,&x_4,&y_4);
      d=(double)((x_1-x_2)*(y_3-y_4))-((y_1-y_2)*(x_3-x_4));
      d1=(double)((x_3-x_4)*(y_3-y_1))-((y_3-y_4)*(x_3-x_1));
      d2=(double)(-((x_3-x_1)*(y_1-y_2))+((y_3-y_1)*(x_1-x_2)));


      if((int)d==0 && (int)d1==0 && (int)d2==0)
      {
         printf("LINE\n");
      }
      else if((int)d==0)
      {
         printf("NONE\n");
      }
      else
      {
         t1=d1/d;
         t2=d2/d;
         x=x_1+t1*(x_2-x_1);
         y=y_1+t1*(y_2-y_1);
         printf("POINT %.2lf %.2lf\n",x,y);
      }

   }

   printf("END OF OUTPUT\n");
   return 0;
}



