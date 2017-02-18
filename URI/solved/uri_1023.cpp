using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;
    int c = 1;
    while(scanf("%d",&tc) && tc)
    {
        if(c!=1){
            cout << endl;
        }
        map<int,int> mif;
        int total=0;float area=0;
        for(int i=0;i<tc;i++){
            int ni,f;
            cin >> ni >> f;
            total+=ni;
            area+=f;

            int avg = f/ni;
            if(mif.find(avg)!=mif.end()){
                mif[avg]+=ni;
            }
            else
                mif[avg] = ni;
            //mif[ni]= f/ni;
        }

        printf("Cidade# %d:\n",c++);
        for(auto it=mif.begin();it!=mif.end();it++){
            if(it!=mif.begin()){
                cout << " ";
            }
            cout << it->second << "-" << it->first;
        }
        int temp = (area/total)*100;
        printf("\nConsumo medio: %.2f m3.",temp/100.0);
        cout << endl;


    }

}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1023
///Time    :





//  ios_base::sync_with_stdio(false);cin.tie(NULL);
