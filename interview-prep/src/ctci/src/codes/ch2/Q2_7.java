package codes.ch2;

import java.util.Objects;

public class Q2_7 {
    static class Node{
        int data;
        Node next;

//        @Override
//        public boolean equals(Object o) {
//            if (this == o) return true;
//            if (o == null || getClass() != o.getClass()) return false;
//            Node node = (Node) o;
//            return data == node.data &&
//                    Objects.equals(next, node.next);
//        }
//
//        @Override
//        public int hashCode() {
//            return Objects.hash(data, next);
//        }

        Node(int data){this.data = data;}

    }

    static class LinkedList{
        Node head;
        void insert(int data){
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
        void insert(Node newNode){
            newNode.next = head;
            head = newNode;
        }
        void print(){
            Node it = head;
            while(it!=null){
                System.out.printf(" %d",it.data);
            }
            System.out.println();
        }
    }
    static Node findIntersectingNode(LinkedList l1, LinkedList l2){
        Node tempHead1 = l1.head;
        Node tempHead2 = l2.head;
        while(tempHead1!=null){
            while(tempHead2!=null){
                if(tempHead1.equals(tempHead2))return tempHead1;
                tempHead2 = tempHead2.next;
            }
            tempHead1 = tempHead1.next;
        }
        return null;
    }

    public static void main(String[] args){
        Node n1 = new Node(1);
        Node m1 = new Node(1);

        Node n2 = new Node(2);
        Node m2 = new Node(2);

        Node c = new Node(3);
        LinkedList list1 = new LinkedList();
        LinkedList list2 = new LinkedList();
        list1.insert(n1);
        list1.insert(n2);
        list1.insert(c);

        list2.insert(m1);
        list2.insert(m2);
        list2.insert(c);

        Node resultNode = findIntersectingNode(list1,list2);
        if(resultNode!=null)System.out.println(resultNode.data);
        else System.out.println("No intersecting node found!!");


    }
}
