
#include<bits/stdc++.h>

using namespace std;
#define PI 3.1415926535897
double perimeter(double a,double b , double c)
{

    return (a+b+c)/2.0 ;
}

double triangle_area(double a,double b , double c)
{
    double p = perimeter(a,b,c);
    return sqrt(p*(p-a)*(p-b) *(p-c));
}
double cir(double c)
{
    return PI*c*c;
}


int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        double r1=((a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        //cout << (cir(c) - tri(a,b,c)) << endl;
        double r =(2.0*triangle_area(a,b,c))/((a+b+c)/2.0) ;
        //cout << " " << PI*r*r*(1.0/4.0) << " ";
        //cout << tri(a,b,c) - PI*r*r*(1.0/4.0) << endl;

        printf("%.4lf %.4lf %.4lf\n",(cir(r1) - triangle_area(a,b,c)), (triangle_area(a,b,c) - PI*r*r*(1.0/4.0)) , (PI*r*r*(1.0/4.0)));

    }

    return 0;
}
