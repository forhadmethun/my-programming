#include<bits/stdc++.h>
using namespace std;
// Input : X and Y co-ordinates of the points in order.
// Each point is represented by (X[i], Y[i])

int coverPoints(vector<int> &X, vector<int> &Y) {
    int sum = 0;

    for(int i=1;i<X.size();i++){
        sum += max(abs(X[i]-X[i-1]),abs(Y[i]-Y[i-1]));
    }
    return sum;
}

int main(){
    vector<int> X = {1,4};
    vector<int> Y = {3,7};
    cout << coverPoints(X,Y) << endl;
    return 0;
}