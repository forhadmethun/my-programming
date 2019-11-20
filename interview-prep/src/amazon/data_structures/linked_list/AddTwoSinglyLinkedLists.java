package amazon.data_structures.linked_list;

import java.util.*;

// both number should contain same digit

public class AddTwoSinglyLinkedLists {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }
    static Node insert(Node head, int data){
        Node newNode = new Node(data);
            newNode.next = head;
            return newNode;
    }
    static void print(Node head){
        Node tempNode = head;
        while(tempNode!=null){
            System.out.printf("%d ",tempNode.data);
            tempNode = tempNode.next;
        }
        System.out.println();
    }
    static Node sum = null;
    public static void main(String[] args) {
        Node head1 = null; // new Node(1);
        head1 = insert(head1, 9);
        head1 = insert(head1,2);
        head1 = insert(head1,3);

        Node head2 = null; // new Node(1);
        head2 = insert(head2, 9);
        head2 = insert(head2,5);
        head2 = insert(head2,9);

        sum = add(head1,head2,0);
        print(sum);

//        int x= 0;

    }

    private static Node add(Node head1, Node head2, Integer carry) {
        if (head1 == null && head2 == null && carry == 0) return null;
        int value = carry;
        if(head1!=null){
            value+=head1.data;
        }
        if(head2!=null){
            value+=head2.data;
        }
        if(value >= 10){
            carry = 1;
        }else{
            carry = 0;
        }
        Node snum = null;
        snum = insert(snum,value%10); // insert(sum, value %10);
        snum.next = add(
                head1 != null ? head1.next : null,
                head2 != null ? head2.next : null,
                carry
        );
        return snum;
//        carry = add(head1.next, head2.next,(head1.data + head2.data)>=10 ? 1: 0);
//        int f = head1.data;
//        int l = head2.data;
//        sum = insert(sum,(f+l+carry)%10 );
//        return (head1.data + head2.data)>=10 ? 1: 0;
    }
}
