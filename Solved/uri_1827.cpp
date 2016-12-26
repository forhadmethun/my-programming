using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int tc;
    while(scanf("%d\n",&tc)!=EOF){
        int a[tc][tc];
        for(int i=0;i<tc;i++){
            for(int j=0;j<tc;j++){
                a[i][j] = 0;
            }
        }
        for(int i=0;i<tc;i++){
            a[i][i] = 2;
        }
        for(int i=0;i<tc;i++){
            a[i][tc-i-1] = 3;
        }

        int siz_div = tc/3;


        for(int i=siz_div;i<tc-siz_div;i++){
            for(int j=siz_div;j<tc-siz_div;j++){
                a[i][j] = 1;
            }
        }
        if(tc%2==1)
        a[tc/2][tc/2] = 4;


        //int a[tc][tc];
        for(int i=0;i<tc;i++){
            for(int j=0;j<tc;j++){
              printf("%d",a[i][j]);//  a[i][j] = 0;
            }
            cout << endl;
        }
        cout << endl;
    }



    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1827
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
