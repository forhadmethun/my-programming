package behavioral.iterator;

public class LinkedList implements Collection {
    Node head;
    Node current;
    @Override
    public void insert(int data) {
        Node newNode = new Node(data);
        if(head == null) {
            head = newNode;
            current = newNode;
            return;
        }
        current.next = newNode;
        current = newNode;

    }

    @Override
    public Iterator getIterator() {
        return new LinkedListIterator(head);
    }
    class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }
}
