package mycodeschool;

import java.util.*;

class LinkedListNode{
    int data; 
    LinkedListNode next; 
    LinkedListNode(int data){
        this.data = data; 
        this.next = null;
    }
}
class SinglyLinkedList{
    LinkedListNode head;
    SinglyLinkedList(){
        this.head = null;
    }
    void print(){
        LinkedListNode tempNode = head; 
        while(tempNode!=null){
            System.out.printf(" %d", tempNode.data);
            tempNode = tempNode.next;
        }
        System.out.println();
    }
    void addToTail(int data){
        if(head == null){
            head = new LinkedListNode(data); 
            return;
        }
        LinkedListNode tempNode = head; 
        while(tempNode.next!=null){
           // System.out.printf(" %d", tempNode.data);
            tempNode = tempNode.next;
        }
        tempNode.next = new LinkedListNode(data);

    }
    void addToHead(int data){
        LinkedListNode newNode = new LinkedListNode(data); 
        newNode.next = head; 
        head = newNode;
    }
    void addToNth(int n, int data){
        if(n == 1){
            addToHead(data);
            return;
        }
        LinkedListNode tempNode = head; 
        for(int i = 0; i < n-2; i++){
            tempNode = tempNode.next; 
        }
        LinkedListNode newNode = new LinkedListNode(data); 
        newNode.next = tempNode.next; 
        tempNode.next = newNode;
    }
    void deleteAtNth(int n){
        if(n == 1){
            head = head.next;
            return;
        }
        LinkedListNode tempNode = head; 
        for(int i = 0; i < n-2; i++){
            tempNode = tempNode.next; 
        }
        //newNode.next = tempNode.next; 
        tempNode.next = tempNode.next.next;
    }
    void reverseLinkedListRec(){
        head = reverseLinkedListRec(head);
    }
    LinkedListNode reverseLinkedListRec(LinkedListNode node){
        if(node.next == null) return node; 
        LinkedListNode newNode = reverseLinkedListRec(node.next);
        node.next.next = node;
        node.next = null;
        return newNode;
    }
    void reverseLinkedListIter(){
        head = reverseLinkedListIter(head);
    }
    LinkedListNode reverseLinkedListIter(LinkedListNode node){
        LinkedListNode prev, cur, next; 
        prev = null; 
        cur = node; 
        while(cur!=null){
            next = cur.next; 
            cur.next = prev; 
            prev = cur; 
            cur = next;
        }
        return prev;
    }
    void printReverse(){
        printReverse(head); 
        System.out.println();
    }
    void printReverse(LinkedListNode node){
        if(node == null) return; 
        printReverse(node.next); 
        System.out.printf("%d ",node.data); 
    }

    public static void main(String[] args){    
        SinglyLinkedList l1 = new SinglyLinkedList(); 
        l1.addToTail(1);
        l1.addToTail(2); 
        l1.addToTail(3); 
        l1.addToHead(-1);
        l1.addToHead(-2); 
        l1.addToNth(3, 0);
        l1.addToNth(1,-3);
        l1.print();
        l1.deleteAtNth(1);
        l1.print();
        l1.deleteAtNth(6);
        l1.print();
        l1.reverseLinkedListRec();
        //l1.head = l1.reverseLinkedListRec(l1.head); 
        l1.print();
        l1.reverseLinkedListIter(); 
        l1.print();
        l1.printReverse();  
    }

}
