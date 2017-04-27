#include <bits/stdc++.h>
#include "D:\googleDrive\_CSE\Code\Others\Graphics\Offline_3\codes\bitmap_image.hpp"

using namespace std;
struct point{
    double x,y,z;
    point(){
        x = 0;
        y = 0;
        z = 0;
    }
    point(double px,double py,double pz){
        x = px;
        y = py;
        z = pz;
    }
    point operator = (point p){
        x = p.x;
        y = p.y;
        z = p.z;
    }

};
struct triangle{
    point a,b,c;
    point color;
};

double** create_2d_array(int row,int col){
    double **array = new double*[row];
    for(int i=0;i<row;i++){
        array[i] = new double[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            array[i][j]  = 0;
        }
    }
    return array;
}


void delete_memory(double** mat,int row){
    for(int i=0;i<row;i++){
        delete[] mat[i];
       // printf("%d freeing memory\n",i);
    }

//    int **mat = create_2d_array();
//    print_matrix(mat,10,10);
//    delete_memory(mat,10);
//    print_matrix(mat,10,10);
}


int main(){
    FILE *fp1,*fp2,*fp3,*fp4,*stage1,*stage2,*stage3;
    //reading config
    fp1=fopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_3\\codes\\config.txt","r");

    int Screen_Width, Screen_Height;
    double x_limit, y_limit, z_limit_front,z_limit_rear;
    //config input
    fscanf(fp1,"%d%d%lf%lf%lf%lf",&Screen_Height,&Screen_Width,&x_limit,&y_limit,&z_limit_front,&z_limit_rear);
    cout << z_limit_rear << endl;
    //reading stage3
    fp2=fopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_3\\codes\\stage3.txt","r");
    vector<triangle> v;
    triangle t;
    //taking triangle input ..
    while( fscanf(fp2,"%lf%lf%lf%lf%lf%lf%lf%lf%lf\n", &t.a.x ,&t.a.y ,&t.a.z,&t.b.x,&t.b.y,&t.b.z,&t.c.x,&t.c.y,&t.c.z)!=EOF){
        v.push_back(t);
    }
//    cout << v.size() << "--> " << v[0].a.x << endl;

    double dx,dy,Top_Y,Left_X;
    dy = Screen_Height/2.0;
    dx = Screen_Width/2.0;

    Top_Y= 1-dy/2, Left_X= -1+dx/2;

    //declaring the z buffer
    double **Z_buffer = create_2d_array(Screen_Height,Screen_Width);



    //creating the image...
    bitmap_image image(Screen_Width,Screen_Height);
    /*
    for(int i=0;i<200;i++){
        for(int j=0;j<100;j++){
            image.set_pixel(i,j,255,255,0);
        }
    }
    */
    image.save_image("bl.bmp");

    //freeing memory
    delete_memory(Z_buffer,Screen_Height);
    return 0;
}
