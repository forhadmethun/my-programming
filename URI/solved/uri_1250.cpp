#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);

    int tc;scanf("%d\n",&tc);
    while(tc--){
        int n;scanf("%d\n",&n);
        vector<int> vi;
        vector<char> vc;
        for(int i=0;i<n;i++){
            int in;scanf("%d\n",&in);
            vi.push_back(in);
        }
         for(int i=0;i<n;i++){
            char ch;scanf("%c",&ch);
            vc.push_back(ch);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(vc[i] == 'J' && vi[i]>2){
                count++;
            }
            else if (vc[i] == 'S' && (vi[i] == 1 || vi[i] == 2) ){
                count++;
            }
            //cout << vc[i];
        }
        //cout <<count << endl;
        printf("%d\n",count);

    }

    return 0;
}