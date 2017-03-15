#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;
int main (int argc, const char * argv[])
{
    int t, count=0;
    string line1, line2;
    int index;
    string value;
    //vector<pair<int, string> > store;
    vector<int> vec;

    cin>>t;
    getchar();
    while (t--) {
        getchar();

        count++;
        getline(cin, line1);
        //getline(cin, line2);
        stringstream ss1(line1);//, ss2(line2);
        while (ss1>>index) {
            //ss2>>value;
            vec.push_back(index);
            //store.push_back(pair<int, string>(index, value));
        }
        //sort(store.begin(), store.end());
        vector<string> vstring(vec.size());
        for(int i=0;i<vec.size();i++){
            string d;
            cin>>d;
            vstring[vec[i]-1] = d;

        }
        if (count>1) {
            cout<<endl;
        }
        for (int i=0; i<vstring.size(); i++) {
            cout<<vstring[i]<<endl;
        }

        vstring.clear();
        vec.clear();


    }
    return 0;
}
