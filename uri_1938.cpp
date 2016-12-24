using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
 //   freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);

    int tc;scanf("%d\n",&tc);
    map<float,int> m;
    while(tc--){
    int id;float val;
        scanf("%d%f",&id,&val);
        m[val] = id;
    }
    auto it=m.rbegin();
    if(it->first < 8){
        printf("Minimum note not reached\n");
    }
    else{
        cout << it->second << endl;
    }
    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1938
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
