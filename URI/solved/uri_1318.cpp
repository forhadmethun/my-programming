using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
//    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\Code\\out.txt","w",stdout);
    int a,b;
    while(scanf("%d%d\n",&a,&b)!=EOF)
    {
        if(a==0 & b== 0) break;
        int ans = 0;
        map<int,bool> s;
        for(int i=0;i<b;i++){
            int in;scanf("%d\n",&in);
            if(s.find(in)!=s.end() && s[in] == false){
                s[in] = true;
                ans++;
            }
            else if(in<=a) {
                if(s.find(in)!=s.end()){

                }
                else
                s[in] = false;

            }
        }
        cout <<ans << endl;

    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1318
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
