using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    vector<int> vb1,vb2;
    for(int i=0;i<5;i++){
        int in;scanf("%d",&in);
        vb1.push_back(in);
    }
    for(int i=0;i<5;i++){
        int in;scanf("%d",&in);
        vb2.push_back(in);
    }
    bool isTrue  = true;
    for(int i=0;i<5;i++){
        if(vb1[i] == vb2[i]){
            isTrue = false;
            break;
        }
    }
    if(isTrue){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1743
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
