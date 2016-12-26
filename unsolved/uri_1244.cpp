using namespace std;
#include<bits/stdc++.h>

int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
//  freopen("D:\\googleDrive\\_CSE\\URI\\out.txt","w",stdout);
    int tc;scanf("%d\n",&tc);
    while(tc--){
        vector<pair<int,string> > v;
        string str;getline(cin,str);
        stringstream ss(str);
        string temp;
        while(ss >> temp){
            v.push_back(make_pair((int)temp.length(),temp));
        }
        stable_sort(std::begin(v),
                    std::end(v),
                    [](const std::pair<int, string>& p1, const std::pair<int, string>& p2) { return p1.first < p2.first; });
        for(int i=v.size()-1;i>=0;i--){
            if(i!=v.size()-1){
                cout << " ";
            }
            cout << v[i].second;// << endl;
        }
    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1244
///Time    :


//  ios_base::sync_with_stdio(false);cin.tie(NULL);
