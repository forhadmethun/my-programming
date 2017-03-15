using namespace std;
#include<bits/stdc++.h>
int abs(int a,int b){
    if( a >b) return a-b;
    else return b-a;
}
int main(int argc, char const *argv[]) {
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    //fo
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && B<=C){
        cout << ":)" <<  endl;
    }
    else if(B>A && B>=C){
        cout << ":(" << endl;
    }
        //3
    else if(B>A && C>B && abs(B,C)<abs(A,B)){
        cout << ":(" << endl;
    }
        //4
    else if(B>A && C>B && abs(B,C)>= abs(A,B)){
        cout << ":)" << endl;
    }
        //5
    else if(A>B && B>C && abs(B,C) < abs(A,B)){
        cout << ":)" << endl;
    }
    //6
    else if(B<A && C<B && abs(B,C) >=abs(A,B)){
        cout << ":(" << endl;
    }
    else if(A==B){
        if(C>B){
            cout << ":)" << endl;
        }
        else cout << ":(" << endl;
    }

    return 0;
}

///Writer  : Md ForHad Hossain Methun
///Problem : uri 1847
///Time    :





//  ios_base::sync_with_stdio(false);cin.tie(NULL);
