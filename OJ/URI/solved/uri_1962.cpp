using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
   // freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);
    int tc;scanf("%d\n",&tc);
    while(tc--){
        int year;scanf("%d\n",&year);
        int diff = 2015 - year;
        if(diff == 0){
            printf("1 A.C.\n");
        }
        else if(diff>0){
            printf("%d D.C.\n",diff);
        }
        else{
            printf("%d A.C.\n",-diff+1);
        }

    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1962
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
