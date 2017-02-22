#include <bits/stdc++.h>
using  namespace std;
#define EPS 1e-9
#define M_PI acos(-1)

double DEG_to_RAD(double d){ return (d*M_PI )/ 180.0; }
double RAD_to_DEG(double r){ return  (180.0*r)/ M_PI ;}

struct point{double x,y;point(){x=y=0.0;}point(double _x,double _y){x=_x;y=_y;} bool operator ==(point other){return fabs(x-other.x) <EPS && (fabs(y-other.y)<EPS);} bool operator <(point other){if (fabs(x-other.x) > EPS)return x<other.x; else y<other.y;}};

double dist(point p1,point p2){return hypot(p1.x- p2.x,p1.y -p2.y);}

point rotate(point p, double theta){
    return  point(p.x*cos(theta) - p.y*sin(theta),p.x*sin(theta)+p.y*cos(theta));
}




int main(){
    point p1(0,0),p2(0,0),p3(0,1);
    printf("%d\n",p1 == p2);
    //printf("%d\n",p1 < p3);
    return 0;
}