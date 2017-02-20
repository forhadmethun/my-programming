#include <bits/stdc++.h>
using namespace std;

int ugly(int n)
{
    int u[1501];
    u[0] = 1;
    int i2 = 0,i3 = 0,i5 = 0;
    /*
    int next2 = u[i2] *2;
        int next3 = u[i3] *3;
        int next5 = u[i5] *5;
        */
    for(int i=1; i<n; i++)
    {
        /*

                int mn = min(next2,min(next3,next5));
                u[i] = mn;

                if(mn == next2){
                        i2++;
                        next2 = u[i2]*2;
                }
                 if(mn == next3){
                        i3++;
                        next3 = u[i3]*3;
                }
                if(mn == next5) {
                        i5++;
                        next5 = u[i5]*5;
                }
            */
        int next2 = u[i2]*2, next3 = u[i3]*3, next5 =u[i5]*5;
        int mn = min(next2, min(next3, next5));
        u[i] = mn;
        if(mn == next2) i2++;
        if(mn == next3) i3++;
        if(mn == next5) i5++;

    }
    return u[n-1];
}

int main()
{
    //cout << "Hello world!" << endl;
    cout << "The 1500'th ugly number is "<<ugly(1500)<< "." << endl;
    /*
    for(int i=0;i<15;i++)
        cout << ugly(i) << endl;
        */
    return 0;
}
