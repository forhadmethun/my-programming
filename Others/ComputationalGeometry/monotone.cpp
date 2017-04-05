#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-9
struct point{
    double x,y;
    point(){
        x = 0;
        y = 0;
    }
    point(double _x,double _y){
        x = _x;
        y = _y;
    }
    point operator=(point p){
        x = p.x;
        y = p.y;
    }
    bool operator == (point other) const {
        return (fabs(x - other.x) < EPS && (fabs(y - other.y) < EPS)); }
    bool operator > (point other){
        if(fabs(x-other.x) > EPS){
            return x > other.x;
        }
        return y < other.y;
    }
    bool operator < (point other){
        if(fabs(x- other.x) >  EPS){
            return x < other.x;
        }
        return y > other.y;
    }
};
struct line{
    double a,b,c;
};
void pointsToLine(point p1,point p2,line &l1){
    if(fabs(p2.x - p1.x) < EPS){
        l1.a = 1.0;
        l1.b = 0;
        l1.c = -p1.x;
    }
    else{
        l1.a = p1.y -p2.y;
        l1.b = p2.x - p1.x;
        l1.c = p2.y * p1.x - p1.y * p2.x;
    }
}
double distToLineSegment(point p,point a,point b){
    line l ;pointsToLine(a,b,l);
    return fabs((p.x*l.a + p.y*l.b + l.c)/sqrt(l.a*l.a + l.b*l.b));
}

int main(){
    point p(0,0);
    point q = p;
    printf("p(%lf,%lf) , q(%lf,%lf)\ndistance (5,5) to x axis: %lf\n", p.x, p.y, q.x, q.y,distToLineSegment(point(5,5),point(0,0),point(5,0)));
    return 0;
}