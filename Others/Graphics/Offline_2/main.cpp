#include <bits/stdc++.h>
using namespace std;
struct point{
    double x,y,z;
    point(){
        x = 0;
        y = 0;
        z = 0;
    }
};

struct triangle{
    point ab,bc,ca;
};
int main(){
    //freopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_2\\scene.txt","r",stdin);
    //freopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_2\\out.txt","w",stdout);
    FILE *fp1,*fp2,*fp3,*fp4;
    char buff[255];

    fp1=fopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_2\\scene.txt","r");
    point eye,look_at,up;
    double field_of_view, aspect_ratio, near, far;
    //cin >> eye.x >> eye.y >> eye.z >> look_at.x >> look_at.y >> look_at.z >> up.x >> up.y >> up.z;
    fscanf(fp1,"%lf%lf%lf%lf%lf%lf%lf%lf%lf\n",&eye.x,&eye.y,&eye.z,&look_at.x,&look_at.y,&look_at.z,&up.x,&up.y,&up.z);
    //cin >> field_of_view >> aspect_ratio>>near >> far;
    fscanf(fp1,"%lf%lf%lf%lf\n",&field_of_view,&aspect_ratio,&near,&far);
    //getchar();
    //fgetc(fp1);

    string input;

    triangle t;
    point scale;
    double angle;point p;
    point translate;

    vector<triangle> v;

    while(true){
        fgets(buff, 255, (FILE*)fp1);
        string input(buff);
        input.pop_back();
        if(input == "triangle"){
            fscanf(fp1,"%lf%lf%lf%lf%lf%lf%lf%lf%lf\n",&t.ab.x ,&t.ab.y ,&t.ab.z,&t.bc.x,&t.bc.y,&t.bc.z,&t.ca.x,&t.ca.y,&t.ca.z);
//            fscanf("%lf %lf %lf",&t.ab.x,&t.ab.y,&t.ab.z);
//            fscanf("%lf %lf %lf",&t.bc.x,&t.bc.y,&t.bc.z);
//            fscanf("%lf %lf %lf",&t.ca.x,&t.ca.y,&t.ca.z);

            /*
            cin >> t.ab.x >> t.ab.y >> t.ab.z ;
            cin >> t.bc.x >> t.bc.y >> t.bc.z ;
            cin >> t.ca.x >> t.ca.y >> t.ca.z ;
            */
            v.push_back(t);

        }
        else if(input == "push"){

            continue;
        }
        else if(input == "pop"){
            continue;
        }
        else if(input == "scale"){

           // cin >> scale.x >> scale.y >> scale.z;
            fscanf(fp1,"%lf%lf%lf\n",&scale.x,&scale.y,&scale.z);
        }
        else if(input == "rotate"){

            //cin >> angle >> p.x >> p.y >> p.z;
            fscanf(fp1,"%lf%lf%lf%lf\n",&angle,&p.x,&p.z,&p.z);
        }
        else if(input =="translate"){

            //cin >> translate.x >> translate.y >> translate.z;
            fscanf(fp1,"%lf%lf%lf\n",&translate.x,&translate.y,&translate.z);

        }
        else if(input == "end" || input == "en"){
            break;
        }
        //fgetc(fp1);
    }
    fclose(fp1);

    fp2 = fopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_2\\out.txt","w");
    //cout << "successfully input taken" << endl;
    fputs("successfully input taken",fp2);
    fclose(fp2);
    fp3  = fopen("D:\\googleDrive\\_CSE\\Code\\Others\\Graphics\\Offline_2\\out2.txt","w");

    //cout << (int)v.size() << endl;
    fprintf(fp3,"%d",(int)v.size());
    fclose(fp3);

    return 0;
}