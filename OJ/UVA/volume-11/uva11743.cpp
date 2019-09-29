#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{//taking input:
    int kase,co,j,c,i,l,m;
    //char ,x[8],z[8];
    while(scanf("%d",&kase)==1)
{
    for(co=1;co<=kase;co++)
    {
    char a[19],b[16];int j=0;
    for(c=0;c<19;c++){
        scanf("%c",&a[c]);//printf("%c ",a[c]);
    }//taking fixed number and removing space:
    for(i=0;i<19;i++){//int j=0;
        if(i!=4 && i!=9 && i!=14){//printf("%c",a[i]);
            b[j]=a[i];
            j++;
        }
    }//for(int k=0;k<16;k++){// printf("%c ",b[k]);//}//taking even numbers:
    int y=0;
    char x[8];
    for(l=0;l<16;l++)
    {
        if((l)%2==0){
            x[y]=b[l];
        y++;
        }
    }
    y=0;
    char z[8];
    //taking odd number:
    for(l=0;l<16;l++)
    {
        if((l)%2!=0){
            z[y]=b[l];
        y++;
        }
    }
//taking odd sum:
    int e=0;
    //char x[8];

    for(m=0;m<8;m++){//printf("%d ",(for(int m=0;m<8;m++){        //printf("%d ",(x[m]-48)*2);// e+=(((x[m]-48)*2)%10)+((x[m]-48)*2)/10;//}x[m]-48)*2);
        e+=(((x[m]-48)*2)%10)+((x[m]-48)*2)/10;
    }//printf("%d",e);//taking even sum;
    int p=0;
    //char z[8];
    for(int m=0;m<8;m++){//printf("%d ",(x[m]-48)*2);//p+=(((z[m]-48)*2)%10)+((z[m]-48)*2)/10;
        p+=z[m]-48;
    }//printf("\n%d ",p);
    if((e+p)%10==0)cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
    }
    }
    return 0;
}
