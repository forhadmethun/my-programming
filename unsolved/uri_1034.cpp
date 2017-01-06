using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int tc;scanf("%d\n",&tc);
    while(tc--) {
        int n, m;
        scanf("%d%d\n", &n, &m);
        vector<int> vi;
        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);
            vi.push_back(in);
        }
        sort(vi.begin(),vi.end());
        reverse(vi.begin(),vi.end());
//        for(int i=0;i<n;i++){
//            cout << vi[i] << endl;
//        }
        int count = 0;
        int i=0;
        while(m!=0){
            if(vi[i]<=m){
                m= m-vi[i];
                count++;
            }
            else i++;

        }
        cout << count << endl;




    }


    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1034
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
