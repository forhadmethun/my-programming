using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//      freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
//   freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);

    int tc;
    while(scanf("%d",&tc) && tc)
    {
        map<int,int> mp;
        for(int i=1;i<=tc;i++){
            int in;
            scanf("%d",&in);
            mp[in] = i;
        }
        auto it=mp.rbegin();
        it++;
        cout << it->second << endl;
    }
    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1533
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
