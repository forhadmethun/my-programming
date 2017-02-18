#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data){
    Node* t = new Node();
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;
}
Node* insert(Node* root, int data){
    if(root == NULL){
        root =  newNode(data);
    }
    else if(data < root->data){
        root->left = insert(root->left, data);
    }
    else if(data > root->data){
        root->right = insert(root->right,data);
    }
    return root;
}

void in(Node* tree){
    if(tree==NULL) return ;
    in(tree->left);
    printf(" %d",tree->data);
    in(tree->right);
}
void pre(Node* tree){
    printf(" %d",tree->data);
    if(tree==NULL) return ;
    in(tree->left);
    in(tree->right);
}
void post(Node *tree){
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
       Node* tree = NULL;
        int n;scanf("%d",&n);
        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);

            tree = insert(tree,in);
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