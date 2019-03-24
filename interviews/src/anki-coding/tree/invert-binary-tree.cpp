#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
public:
    Node* left;
    Node* right;
    T data;
    Node(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

/*
 Input:

     5

   /   \

  2     7

 / \   / \

1   3 6   9



Output:

     5

   /   \

  7     2

 / \   / \

9   6 3   1
 */

template<class T>
class Tree{
public:
    Node<T>* root;
    void build(){
        root = new Node<int>(5);
        root->left = new Node<int>(2);
        root->left->left = new Node<int>(1);
        root->left->right = new Node<int>(3);

        root->right = new Node<int>(7);
        root->right->left = new Node<int>(6);
        root->right->right = new Node<int>(9);
    }

    void invert(){
        root = _invert(root);
        int debug = 0;
    }

    Node<T>* _invert(Node<T>* root){
        if(root == NULL) return NULL;
        _invert(root->left);
        _invert(root->right);

        Node<T>* leftTemp = root->left;
        root->left = root->right;
        root->right = leftTemp;

        return root;
    }
};

int main(){
    Tree<int> t;
    t.build();
    t.invert();
    return 0;
}