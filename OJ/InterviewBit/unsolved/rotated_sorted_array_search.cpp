#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int len;
int findVector(int f,int l,int h){
    if(f > v[h]) return -1;
    while(l<=h){
        int m = (l+h) /2;
        if (v[m] ==f)return m;
        else if(v[m]<f){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return -1;
}

int findRotatios(int low,int high){
    int mid =(low +high) /2;
    int prev = (mid -1+len)%len;
    int next = (mid +1)%len;
    if(v[low]<=v[high]){
        return low;
    }
    if((v[mid]<v[prev])&&(v[mid]<v[next]))return mid;
    if(v[low]<=v[mid]){
        return findRotatios (mid+1,high ) ;
    }
    else return findRotatios (low,mid -1);
}
int search(const vector<int > &A,int B){
    v =A ;
    len =(int)A.size();
    int id=findRotatios (0,len-1);

    //int find;
    if(B>=A[id] && B<= A[len - 1]){
        return findVector(B,id,len-1);
    }else return  findVector(B,0,id-1);
    //return find;
}

int main() {
    vector <int >v{4,1,2,3};
    cout << search (v,3) <<endl;
    return 0;
}