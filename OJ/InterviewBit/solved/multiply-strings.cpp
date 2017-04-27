#include<bits/stdc++.h>
using namespace std;
string  multiply(string A, string B) {
    string ans = "";
    int size_a = (int)A.size();
    int size_b = (int)B.size();
    if(size_a == 0 || size_b == 0)return "0";
    vector<int> v(size_a+ size_b + 1, 0);
	for(int i=size_a-1;i>=0;i--){
		for(int j=size_b-1;j>=0;j--){
			v[i+j+1] += (A[i] - '0') * (B[j] - '0');
		}
	}
//    cout << "size: " << size_a + size_b << endl;
	for(int i=size_a + size_b;i>=0;i--){
		if(v[i]>=10){
			v[i-1] +=v[i]/10;
			v[i]%=10;
		}
	}
    bool isZero = true;
	for(int i=0;i<size_a + size_b;i++){
//	cout << v[i];
        if(v[i] == 0 && isZero){
            continue;
        } else{

            ans+= '0'+v[i];
            isZero = false;
        }
    }
    if(ans.empty()) ans+="0";
//	cout << endl;



   return ans;
	
}

int main(){
	string A = "01";
	string B = "001";
	
//	cout << multiply(A,B) << endl;
   cout <<  multiply(A,B) << endl;
	
    return 0;
}