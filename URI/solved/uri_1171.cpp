#include<bits/stdc++.h>
using namespace std;
int main()
{

    //uri 1171
//    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);string s1,s2;
    map<int,int> mii;
   // cout << mii[1] << endl;
    int a;
    int tc;
    scanf("%d",&tc);

    while(tc--){
        scanf("%d",&a);
        mii[a]++;
    }

    for(auto it=mii.begin();it!=mii.end();it++){
        printf("%d aparece %d vez(es)\n",it->first,it->second);
    }

    return 0;
}