package codes.ch2;
import java.util.Scanner;
import java.nio.file.Paths;
import java.io.FileReader;
public class Q2_5 {
    public static void main(String[] args){
        LinkedList l1 = new LinkedList();
        LinkedList l2 = new LinkedList();

        l1.insert(6);l1.insert(9);l1.insert(7);
        
        l2.insert(9);l2.insert(9);l2.insert(5);

        l1.print();
        System.out.println("=============");
        l2.print();

        LinkedList sumLists = addLists(l1,l2);
        System.out.println("=============");
        sumLists.print();
        System.out.println("=============");
//        int finalCarry = addListsBackward(l1.head,l2.head,(l1.head.data+l2.head.data)/10);
//        System.out.println("==============");
//
//        if(finalCarry>0)Q2_5.sumListsBackward.insert(finalCarry);
//        Q2_5.sumListsBackward.print();
//
//        System.out.println("===================");
//        System.out.println("-" + finalCarry);
//        int finalCarry = Q2_5.sumListsBackward(

    }
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }
    static class LinkedList{
        Node head;
        void insert(int data){
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;    
        }
        void print(){
            Node iter = head;
            while(iter!=null){
                System.out.println(iter.data);
                iter = iter.next;
            }
        }
        int length(){
            Node iter = head;
            int count = 0;
            while(iter!=null){
                count = count+1;
                iter = iter.next;
            }
            return count;
        }
    }
    static LinkedList addLists(LinkedList list1, LinkedList list2){
        LinkedList list = new LinkedList();
        Node head1 = list1.head;
        Node head2 = list2.head;
        int carry = 0;
        while(head1!=null){
            int sum = head1.data + head2.data+carry;
            int unitValue = (sum)%10;
            list.insert(unitValue);
            carry = sum/10;
            head1 = head1.next;
            head2 = head2.next;
        }
        if(carry>0){
            list.insert(carry);
        }
        return list;
    }
//    static LinkedList sumListsBackward = new LinkedList();
//    static int addListsBackward(Node head1, Node head2,int carry){
//        if(head1==null && head2 == null){
//            return carry;
//        }
//        addListsBackward(head1.next, head2.next,(head1.data+head2.data)/10);
//        System.out.println(head1.data +"-"+head2.data+"-"+carry);
//        sumListsBackward.insert((head1.data+head2.data+carry)%10);
//        return carry;
//    }
}
