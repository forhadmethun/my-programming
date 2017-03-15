#include<bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
BstNode* insert(BstNode* root, int data){
    if(root == NULL){
        root =  GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right,data);
    }
    return root;
}

void in(BstNode* tree){
    if(tree==NULL) return ;
    in(tree->left);
    printf(" %d",tree->data);
    in(tree->right);
}
void pre(BstNode* tree){
    if(tree==NULL) return ;
    printf(" %d",tree->data);
    in(tree->left);
    in(tree->right);
}
void post(BstNode *tree){
    if(tree==NULL) return ;
    in(tree->left);
    in(tree->right);
    printf(" %d",tree->data);
}

int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;scanf("%d",&tc);
    for(int t=1;t<=tc;t++){
        if(t>1)cout << endl;
       BstNode* tree = NULL;
        int n;scanf("%d",&n);
        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);
            if(i==0)
            tree = insert(tree,in);
            else insert(tree,in);
            //cout << "->>>!! "<<in << "!!---- "<<  tree->data << endl;
        }
        /*
        cout << tree->data << endl;
        cout << tree->left->data << endl;
        cout << tree->right->data << endl;
        */
        printf("Case %d:\n",t);
        cout << "Pre.:";pre(tree);cout << endl;
        cout << "In..:";in(tree);cout << endl;
        cout<<"Post:";post(tree);cout << endl;

    }

    return 0;
}