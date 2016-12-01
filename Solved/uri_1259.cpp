#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    freopen("in.txt","r",stdin);
    cin>>N;
    int odd[N+1];
    int even[N+1];
    int o = 0;
    int e = 0;
    int x;
    int arr[N+1];
    for(int i=0;i<N;i++){
        cin>> arr[i];
    }

    //for(int i=0;i<N;i++)cout << arr[i] << " ";
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            even[e++] = arr[i];
        }
        else{
            odd[o++] = arr[i];
        }
    }
    /*
    cout << endl;
    for(int i=0;i<o;i++)cout << odd[i] << " ";

    cout << endl;
    for(int i=0;i<(N-o);i++)cout << even[i] << " ";
    */


    sort(odd,odd+o);
    sort(even,even+(N-o));
    for(int i=0;i<e;i++){
        cout << even[i] <<endl;
    }
    for(int i=o-1;i>=0;i--){
        cout << odd[i] << endl;
    }



    return 0;
}
