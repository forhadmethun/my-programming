#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);
    ;
    int tc;scanf("%d\n",&tc);
    for(int t=1;t<=tc;t++){
        bool arr[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                arr[i][j] = false;
            }
        }

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int in;scanf("%d",&in);
                in--;
                arr[i][in] = true;
            }
        }
        bool ans = true;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                /*
                if(arr[i][j] == false){
                    ans = false;
                    break;
                }
                */
                cout<< arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
        /*
        if(ans){
            printf("Instancia %d\n"
                           "SIM \n",t);
        }
        else{
            printf("Instancia %d\n"
                           "NAO \n",t);
        }
         */


    }
    return 0;
}