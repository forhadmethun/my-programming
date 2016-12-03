#include<bits/stdc++.h>
using namespace std;
int main()
{

    //uri 1397
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
    int tc;
    while(scanf("%d",&tc) && tc){
        int sumA=0,sumB=0;
        int a,b;
        while(tc--){
            scanf("%d%d",&a,&b);
            if(a>b){
                sumA++;
            }
            else if(b>a){
                sumB++;
            }
        }
        cout << sumA << " " << sumB << endl;
    }
    return 0;
}