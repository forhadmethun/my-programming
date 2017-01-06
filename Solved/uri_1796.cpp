using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
 //   freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int n;scanf("%d\n",&n);
    int count0=0 ,count1 = 0;
    for(int i=0;i<n;i++){
        int in;scanf("%d\n",&in);
        if(in)count1++;
        else count0++;
    }
    if(count1>=count0){
        printf("N\n");
    }
    else{
        printf("Y\n");

    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1796
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
