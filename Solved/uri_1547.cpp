using namespace std;
#include<bits/stdc++.h>
int difference(int a,int b)
{
    if(a > b) return a-b;
    else return b-a;

}
int main(int argc, char const *argv[]) {
    //  freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//    freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,near;int ans;
        scanf("%d%d",&n,&near);
        int diff = INT_MAX;
        for(int i=1;i<=n;i++){
            int input;
            scanf("%d",&input);
            if(difference(input, near) < diff){
                diff = difference(input,near);
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1547
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
