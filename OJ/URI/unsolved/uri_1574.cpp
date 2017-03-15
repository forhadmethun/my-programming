#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;scanf("%d\n",&tc);
    while(tc--){
        int n;scanf("%d\n",&n);
        vector<int> vi;
        for(int i=0;i<n;i++){
            vi.push_back(0);
        }
        for(int i=0;i<n;i++){
            string str;
            getline(cin,str);
            if(str == "LEFT"){
                vi[i] = -1;
            }
            else if(str == "RIGHT"){
                vi[i] = 1;
            }
            else{
                int index = str[str.size()-1] -'0';
                //cout << index << endl;
                vi[i] = vi[index-1];
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=vi[i];
        }
        cout << sum << endl;


    }

    return 0;
}