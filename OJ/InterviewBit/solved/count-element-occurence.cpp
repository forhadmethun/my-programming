#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int fc(int l,int h, int B){
    int mid = (l+h)/2 ;
    if(v[l] == B && l==h){
//        cout << "\t\treturend 1" << " mid: " << mid << " l: " << l  << " h: " << h << endl;
        return 1;
    }
    if(l == h ) {
//        cout << "\t\treturend 0" << " mid: " << mid << " l: " << l <<  " h: " << h <<  endl;
        return 0;
    }
//    cout <<  " first call --l: " << l << " --h: " << h << "--mid: " << mid << endl;
    int x =  fc(mid+1,h,B) ;
//    cout <<  " second call --l: " << l << " --h: " << h << "--mid: " << mid << endl;
    int y =  fc(l,mid,B) ;//+ findCount(v,mid+1,h,B);
    return x + y;

}

int findCount(const vector<int> &A, int B) {
    v = A;
    return fc(0,(int)A.size()-1,B);
}


int main(){
    vector<int> v{5, 7, 7,7,7, 8, 8, 10,10,10,10};
    cout << findCount(v,7) << endl;
//    cout <<"-> " <<  findCount(v,0,v.size()-1,8) << endl;
    return 0;
}