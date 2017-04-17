#include<bits/stdc++.h>

using namespace std;
/*
 * O(nlogn) space which is not accepted always...
 *
int repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    set<int> s;
    for(int i=0;i<A.size();i++){
        if(s.find(A[i])!=s.end()){
            return A[i];
        }
        else{
            s.insert(A[i]);
        }
    }
    return -1;
}
*/

/*
 *
 *
 * */
int repeatedNumber(vector<int> A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for (int i = 0; i < A.size(); i++) {
        if (A[abs(A[i])] > 0) {
            int idx = abs(A[i]);
            A[idx] = -A[idx];
//            A[(int)abs(A[i])] =  -1 * A[abs(A[i])];
        } else return abs(A[i]);//-A[abs(A[i])];
    }
    return -1;
}

int main() {
    vector<int> v = {3, 4, 1, 4, 2};
//    vector<int> v = {1,1,2,3,2};
    cout << repeatedNumber(v) << endl;
    return 0;
}

class Solution {
public:
    int repeatedNumber(const vector<int> &V) {
        if (V.size() <= 1) return -1;
        int valueRange = V.size() - 1;
        // 1 to N when the size is N+1.
        int range = sqrt(valueRange);
        if (range * range < valueRange) range++;
        int count[range + 1];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < V.size(); i++) { count[(V[i] - 1) / range]++; }
        int repeatingRange = -1;
        int numRanges = ((valueRange - 1) / range) + 1;
        for (int i = 0; i < numRanges && repeatingRange == -1; i++) {
            if (i < numRanges - 1 || valueRange % range == 0) {
                if (count[i] > range)repeatingRange = i;
            }
            else { if (count[i] > valueRange % range) repeatingRange = i; }
        }
        if (repeatingRange == -1) return -1;
        memset(count, 0, sizeof(count));
        for (int i = 0; i < V.size(); i++) { if ((V[i] - 1) / range == repeatingRange) count[(V[i] - 1) % range]++; }
        for (int i = 0; i < range; i++) { if (count[i] > 1) { return repeatingRange * range + i + 1; }}
        return -1;
    }
};