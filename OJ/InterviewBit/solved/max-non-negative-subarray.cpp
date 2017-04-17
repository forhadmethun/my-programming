#include<bits/stdc++.h>
using namespace std;
long  long integration(vector<long long> v){
    long long sum = 0;
    for(long long i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
vector<int>  maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not prlong long the output, instead return values as specified
    // Still have a doubt. Checkout www.long longerviewbit.com/pages/sample_codes/ for more details
    long long start=0,end=0;

    vector<vector<long long> > vvi;
    map<long long,vector<long long> > m;
    for(long long i=0;i<A.size();i++){
       // cout << "start: " << start << endl;
        //cout << "end  : " << end << endl;
        if(A[i]>=0)end++;
        else{
            vector<long long> v;

            for(long long j=start;j<end;j++){
               // cout << "dhukse -> " << start << ", end: " << end << endl;
                v.push_back(A[j]);
            }
            if(v.size()>0) {
                vvi.push_back(v);
                m[start] = v;
            }
            start = i+1;
            end = i+1;
            //cout << "--------------------" << endl;


        }

    }
    vector<long long> v;
    for(long long j=start;j<end;j++){
        v.push_back(A[j]);
    }

    vvi.push_back(v);

    m[start] = v;
    long long sum = INT_MIN;
    long long idx;
    for(auto it=m.begin();it!=m.end();it++){
//        cout << "\t" << it->first << endl;
        vector<long long> v(it->second);
        long long cum =  integration(v);
        if(cum>sum){
            sum = cum;
            idx = it->first;
        }
//        for(long long i=0;i<v.size();i++){
//            cout << v[i] << " ";
//        }
    //   cout << "   sum " << integration(v) << endl;
//        cout << endl;
    }

    vector<long long> ans;
    long long max_array_size=0;
    int index = 0;
    for(auto it=m.begin();it!=m.end();it++){
        vector<long long> v(it->second);
        long long cum = integration(v);
        if(cum == sum){
            if(v.size()>max_array_size) {
                index = it->first;
                max_array_size = v.size();
            }
        }
    }
   // cout <<index<<  "-----------> " << max_array_size  << endl;
    vector<int> aa;//(m[index]);
    for(int i=0;i<m[index].size();i++){
        aa.push_back((int)m[index][i]);
    }

    return aa;






}

int main(){
    vector<int> A = { 336465782, -278722862, -2145174067, 1101513929, 1315634022, -1369133069, 1059961393, 628175011, -1131176229, -859484421};
   vector<int> ans= maxset(A);
    for(long long i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}