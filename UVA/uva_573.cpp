#include<bits/stdc++.h>
using namespace std;


int main()
{
    float h,u,d,f;
    freopen("in.txt","r",stdin);
    while(scanf("%f%f%f%f",&h,&u,&d,&f) && h)
    {
        float day = 0,initialHeight = 0,distanceClimbed = u,heightAfterClimb,heightAfterSliding;
        bool success = false,failure = false;
        while(1)
        {
            day++;

            heightAfterClimb = initialHeight +  distanceClimbed ;
            heightAfterSliding = heightAfterClimb - d;

            //cout << "day: " << day << " initial: " << initialHeight << " distanceClimbed: " << distanceClimbed << " dac:"<< heightAfterClimb << " hac: " << heightAfterSliding<< endl;
            if(distanceClimbed>0)
            distanceClimbed  =  distanceClimbed - (f/100)*u;
            initialHeight = heightAfterSliding;

            if(heightAfterClimb > h){
                    success  = true;
                    break;
            }
            if(heightAfterClimb < 0 || heightAfterSliding <0){
                failure = true;
                break;
            }
            //if(day == 4)break;

        }
        if(success){
            printf("success on day %d\n",(int)day);
        }
        else if(failure)
        {
            printf("failure on day %d\n",(int)day);

        }



        //cout << h << endl;

    }

    return 0;
}

/*
int main()
{
    float h,u,d,f,day=0,height = 0;

    freopen("in.txt","r",stdin);
    int temp_u ;
    while(scanf("%f%f%f%f",&h,&u,&d,&f) && h)
    {
         bool success=false, failure=false;
        day = 0,height = 0;
        temp_u = u;
        //cout << "test " << endl;
        f = (f*u)/100;
        while(height<=h)
        {
            day++;
            //cout << "\t Day: " << day << endl;
            //cout << "u: " << u << endl;
            height += u;
            //cout << "d: " << d << endl;

            if(height>h)
            {
                success = true;
                break;
            }



            height -= d;
            if(height<0)
            {
                failure  = true;
                break;

            }


            //if(day>)break;
        if(u>0)
            u -=f;
            //cout << "h:" << height << endl;


        }

        //cout << d << endl;
        if(success){
            printf("success on day %d\n",(int)day);
        }
        else if(failure)
        {
            printf("failure on day %d\n",(int)day);

        }








        //cout << h << " " << u  << " " << endl;
    }


    return 0;
}

*/
