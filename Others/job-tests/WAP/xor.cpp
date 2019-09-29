#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct  trie{

    int ct;
    struct trie* left, *right;
    trie(){
        ct = 0;
        left = NULL;
        right = NULL;

    }
};

void insert(trie* root,int level, int x){
    if(level < 0){
        return ;
    }
    if(  (x & (1 << level)) == 0 ){

        if(root->left == NULL )

            root->left = new trie();

        root->left->ct += change;

        Insert( root->left , level - 1 , x , change );

    } else {

        if(root->right == NULL )

            root->right = new trie();

        root->right->ct += change;

        Insert( root->right , level - 1 , x , change );

    }
}

ll query(trie * root , int level , int x ){

    if(root == NULL )

        return 0;

    if(level < 0 )

        return 0;

    if((1 << level) & x ){

        if(root->left != NULL ){

            if(root->left->ct)

                return (1 << level ) + query( root->left , level - 1 , x );
            else

                return query( root->right , level - 1 , x );


        } else

            return query( root->right , level - 1 , x );
    } else
    {
        if(root->right != NULL ){

            if(root->right->ct)

                return (1 << level ) + query( root->right , level - 1 , x );

            else

                return query( root->left , level - 1 , x );


        } else

            return query( root->left , level - 1 , x );

    }
}

int main(){

    trie *root = new trie();

    cin.sync_with_stdio(false);

    int N;
    cin >> N;

    int Array[N];

    for(int i = 0 ; i  < N ; ++i )  cin >> Array[i];

    int sufffix[N+1];
    int xr = 0;
    for(int i = N - 1 ; i >= 0 ; --i ){
        xr = (xr ^ Array[i]);
        sufffix[i] = xr;
        Insert(root , 30 , xr , 1 );
    }
    int Ans = 0;
    xr = 0;
    for(int i = 0 ; i < N - 1; ++i ){
        // remove the contribution of suffix starting from ith index
        Insert(root , 30, sufffix[i] , -1 );
        xr = (xr ^ Array[i]);
        int value = query( root , 30 , xr );
        Ans = max(Ans  , value );
    }

    cout << Ans << endl;

    return 0;
}