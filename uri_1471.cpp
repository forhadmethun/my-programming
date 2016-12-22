using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int n,r;
    bool first = false;
    while(scanf("%d%d",&n,&r)!=EOF){
//        if(first == false){
//            first = true;
//        }
//        else{

          //  first == true;
//        }
        map<int,bool> mp;
        for(int i=1;i<=n;i++){
            mp[i] = true;
        }
        for(int i=0;i<r;i++){
            int in;
            scanf("%d",&in);
            mp[in] = false;
        }
        int count = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second == true){
                count++;
//                cout << it->first  << "-";
                printf("%d ",it->first );

            }

        }
        if(count == 0){
            cout << "*" ;
        }
        cout << endl;
    }


    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1471
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
