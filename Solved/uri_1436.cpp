    #include<bits/stdc++.h>
    using namespace std;


    int main(){
        //uri 1436

        freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);

        int a,n;
        scanf("%d",&a);
        int tc = 0;
        while(tc++<a){
            int n;
            vector<int> vi;
            cin >> n;
            for(int i=0;i<n;i++){
                int in;cin >> in;
                vi.push_back(in);
            }
            sort(vi.begin(),vi.end());
            printf("Case %d: %d\n", tc,vi[vi.size()/2]);
        }


        return 0;
    }