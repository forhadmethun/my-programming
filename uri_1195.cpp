#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
};
Node* insert(int data,Node** root){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left= NULL;
    newNode->right=NULL;


    if(*root == NULL){
        *root = newNode;
        return *root;
    }

    else if(data < (*root)->data){
        (*root)->left = insert(data, &(*root)->left);
    }
    else  if(data > (*root)->data)
        (*root)->right = insert(data, &(*root)->right);



    return *root;
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
    freopen("D:\\googleDrive\\_CSE\\URI\\in.txt","r",stdin);
    int tc;scanf("%d",&tc);
    for(int t=1;t<=tc;t++){
       Node* tree = NULL;
        int n;scanf("%d",&n);
        for(int i=0;i<n;i++){
            int in;scanf("%d",&in);

            tree = insert(in, &tree);
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