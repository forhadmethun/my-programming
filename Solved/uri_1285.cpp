using namespace std;
#include<bits/stdc++.h>
int pos(int a,int b){
    if( a > b) return a-b;
    else return b-a;
}
int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int  n,m;
    while(cin >> n >> m )
    {
        //cout << n << "-" << m << endl;
        int ans = m-n;
        for(int i=n;i<=m;i++){
            string str = to_string(i);
            set<char> ss;int len = str.length();
            for(int j=0;j<len;j++){
                ss.insert(str[j]);
            }
            if((int)ss.size() < len){
               // cout <<"--> " <<  i << endl;
                ans--;
            }

        }
        cout << ans + 1 << endl;


    }
    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1285
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
