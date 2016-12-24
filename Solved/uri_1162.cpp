using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
    int tc;
    scanf("%d",&tc);

    while(tc--) {
        int n;
        vector<int> vi;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int in;
            scanf("%d",&in);
            vi.push_back(in);
        }
        int sum =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(vi[j] < vi[i]){
                    sum++;
                    int temp = vi[j];
                    vi[j] = vi[i];
                    vi[i] = temp;

                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",sum);

    }



}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1162
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
