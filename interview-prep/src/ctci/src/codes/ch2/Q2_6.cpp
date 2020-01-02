#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

};

Node *head = NULL;
void insert(Node** headNode, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *headNode;
    *headNode = newNode;
}
Node *reversedHead = NULL;
Node *reverseNode(Node* node){
    if(node==NULL) return NULL;
    reverseNode(node->next);
    insert(&reversedHead,node->data);

}
void print(Node* node){
    while(node!=NULL){
        printf(" %d",node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    print(head);
    reverseNode(head);
    print(reversedHead);
    return 0;
}