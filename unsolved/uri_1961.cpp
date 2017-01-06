using namespace std;
#include<bits/stdc++.h>
int pos(int a,int b){
    if( a > b) return a-b;
    else return b-a;
}
int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int p,n;scanf("%d%d\n",&p,&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int in;scanf("%d\n",&in);
        arr[i] = in ;

    }
    bool isTrue = true;
    for(int i=1;i<n;i++){
        if(arr[i] - arr[i-1] < p){
            isTrue = false;break;

        }
    }
    if(!isTrue){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }


    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1034
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
