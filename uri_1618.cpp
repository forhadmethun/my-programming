#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x,y;
    Point(){
        x = y = 0.0;
    }
    Point(double x,double y){
        this.x = x;
        this.y = y;
    }
};
struct vec{
    double x ,y;
    vec(double _x,double _y){
        x = _x;
        y = _y;
    }
};

vec toVec(Point a,Point b){
    return vec(b.x-a.x, b.y-a.y);
}



double angle(Point a, Point o, Point b){
    vec oa = toVec(o,a),ob = toVec(o,b);
}
bool inPolygon(Point pt,const vector<Point> &P){
    if((int)P.size() == 0)return false;
    double sum = 0;
    for(int i=0;i<(int)P.size()-1;i++){
        if(ccw(pt,P[i],P[i+1]))sum+=angle(P[i],pt,P[i+1]);

    }
}

int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;scanf("%d",&tc);
    while(tc--){
        int x1,y1,x2,y2,x3,y3,x4,y4,x,y;
        scanf("%d%d%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&x,&y);
        vector<Point> P;
        P.push_back(x1,y1);
        P.push_back(x2,y2);
        P.push_back(x3,y3);
        P.push_back(x4,y4);


        //cout << x1 << "-- " << y << endl;
        
    }
    return 0;
}