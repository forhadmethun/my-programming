#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
Node* head = NULL;
void insert(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;

}
void print()
{
    Node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp  = temp->next;
    }
    printf("\n");
}

void insert(int data, int n){
    Node* temp = new Node();
    temp->data = data;
    if(n == 1){
        temp->next = head;
        head = temp;
    }
    else{
        Node* cur = head;
        for(int i=0;i<n-2;i++){
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next = temp;

    }
}

void del(int pos){
    Node* temp = head;
    if(pos == 1){
        head = head->next;
       // cout << "--------------> " << head->data << endl;
        free(temp);
        return ;
    }

    // 1 2 3
    for(int i=0;i<pos-2;i++){
        temp = temp->next;
    }
    Node* deleted_node = temp->next;
    temp->next = temp->next->next;
    free(deleted_node);
}
//iterative
void reverse()
{
    Node *current, *previous = NULL, *next = NULL ;
    current = head;
    while(current!=NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}
//recursive
void reverse(Node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    p->next->next = p;
    p->next = NULL;
}

void printReverse(Node* temp)
{

    if(temp == NULL){
        return ;
    }
    //printf("%d ",temp->data);
    printReverse(temp->next);
    printf("%d ",temp->data);
}
int main()
{
    //freopen("/home/forhadmethun/ClionProjects/URI_OJ_LINUX/in.txt","r",stdin);
    insert(10,1);
    insert(11,2);
    insert(4,3);
    insert(15,2);
    print();
    del(4);
    print() ;
    reverse();
    print();
    //printf("\n");
    printReverse(head);
    printf("\n");

    reverse(head);
    print();






    return 0;
}