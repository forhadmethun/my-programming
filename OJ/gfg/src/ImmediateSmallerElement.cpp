#include<bits/stdc++.h>
using namespace std;

int main(){
//    cout << "hello world!!" << endl;
//    freopen("/media/forhad/Development/MyCodes/Code/in.txt","r",stdin);
    int t; cin >> t;
    while( t-- > 0 ){
        int n;
//        cin >> n;
        scanf("%d",&n);
        vector<int> v,a;
        for(int i=0;i<n;i++){
            int in;
//            cin >> in;
            scanf("%d",&in);
            v.push_back(in);
        }
        for(int i=1;i<n;i++){
            if(v[i] < v[i-1]){
                a.push_back(v[i]);
            }else{
                a.push_back(-1);
            }
        }
        a.push_back(-1);

        for(int i=0;i< a.size(); i++){
            printf("%d ",a[i]);
        }
        printf("\n");

    }
    return 0;
}