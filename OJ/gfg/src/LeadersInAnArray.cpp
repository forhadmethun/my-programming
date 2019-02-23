#include <bits/stdc++.h>

using namespace std;

//https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?track=sp-arrays-and-searching
//something error happened
int main(){
//    freopen("/media/forhad/Development/MyCodes/Code/in.txt","r",stdin);
        int t; scanf("%d",&t);
        while ( t-- > 0 ){
            int n ;
            vector<int> in;
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                int input; scanf("%d",&input);
                in.push_back(input);
            }

            int lastMax = in[n - 1];

            string out = to_string(in[n-1]) + " ";


            for (int i = n - 2; i >= 0; i--) {
                if (in[i] >= lastMax) {
                    out = to_string(in[i]) + " " + out;
                    lastMax = in[i];
                }
            }
//            cout << "out: " << out << endl;
            printf("%s\n",out.c_str());
//            System.out.println(out);
//            System.out.println(sb.reverse());
        }
        return 0;
}

