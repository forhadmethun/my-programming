#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int len ;
int findRotations( int low,int high){
  //  int len = (int)v.size();


    int mid = (low + high) / 2;
    //previous element of the middle elements
    int prev = (mid-1+len)%len;
    //next element of the middle element
    int next = (mid+1)%len;



    //if already sorted
    if(v[low] <= v[high])return low;

    //if middle element is the smallest one
    if(v[mid]< v[prev] && v[mid] < v[next]){
        return mid;
    }

    if(v[low] <= v[mid]){
        return findRotations(mid+1,high);
    }
    else return findRotations(low,mid -1 );

}
int findMin(const vector<int> &A) {
    v = A;
     len = (int)A.size();
    int idx = findRotations(0,len -1);
    return A[idx];
}


int main(){
//    vector<int> v{3,4,5,1,2};
    vector<int> v{4, 5, 6,  2};
//    cout << findRotations(v,0,(int) v.size()-1) << endl;
    cout << findMin(v) << endl;
    return 0;
}
