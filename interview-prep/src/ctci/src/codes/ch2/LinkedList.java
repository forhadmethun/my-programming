package codes.ch2;

public class LinkedList {
    public Node head = null;
    public static class Node{
        public Node next = null;
        public int data;
        public Node(int data){
            this.data = data;
        }
    }
    void appendToTail(int data){
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    void deleteNode(int d){
        Node n = head;
        if(n.data == d){
            head = head.next;

        }
        while(n.next != null){
            if(n.next.data == d){
                n.next = n.next.next;
            }
            n = n.next;
        }

    }
    
    public static void main(String[] args){
        LinkedList ll = new LinkedList();
        ll.appendToTail(1);
        ll.appendToTail(2);
        ll.appendToTail(3);

        ll.deleteNode(2);

    }
}
