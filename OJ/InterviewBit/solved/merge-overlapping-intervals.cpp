#include<bits/stdc++.h>
using namespace std;

// * Definition for an interval.
  struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
bool compare(Interval a,Interval b){
    return a.start < b.start;
}
vector<Interval> merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end(),compare);
//    for(int i=0;i<A.size();i++){
//        cout << A[i].start << "," << A[i].end << endl;
//    }
    stack<Interval> s;
    s.push(A[0]);
    for(int i=1;i<A.size();i++){
        Interval prev = s.top();
        if(A[i].start > prev.end){
//            cout << "dhuke " << A[i].start << endl;
            s.push(A[i]);
        }else if(A[i].end >prev.end){
//            cout << "shuksiii " << endl;
            prev.end = A[i].end;
            s.pop();
            s.push(prev);
        }

    }
    vector<Interval> ans;
    while(!s.empty()){
        Interval temp = s.top();
        ans.push_back(temp);
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;


}
//A : [ (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 6) ]
int main(){
    vector<Interval> A;
    A.push_back(Interval(1,3));
    A.push_back(Interval(2,6));
    A.push_back(Interval(5,9));
    A.push_back(Interval(4,6));
    A.push_back(Interval(11,25));
//    A.push_back(Interval(6,6));

    vector<Interval> ans = merge(A);
    for(int i=0;i<ans.size();i++){
        cout << ans[i].start << "," << ans[i].end << endl;
    }
    return 0;
}