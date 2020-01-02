package codes.ch2;

public class Q2_1 {
    static class LinkedList{
        Node head;
        class Node{
            int data;
            Node next;
            Node(int data){
                this.data = data;
            }
        }
        void insertNode(int data){
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
        void printList(){
            Node iter = head;
            while(iter!=null){
                System.out.println(iter.data);
                iter = iter.next;
            }
        }
        void removeDuplicate(){
            Node i = head;
            while(i!=null){
                Node slow_j = i;
                Node fast_j = i.next;
                while(fast_j!=null){
                    if(i.data == fast_j.data){
                        slow_j.next = fast_j.next;
                        fast_j = fast_j.next;
                        continue;
                    }
                    slow_j = slow_j.next;
                    fast_j = fast_j.next;
                }
                i = i.next;
            }
        }
//        LinkedList(){
//            head = null;
//        }
    }
    public static void main(String[] args){
        LinkedList ll = new LinkedList();
        ll.insertNode(3);
        ll.insertNode(3);
        ll.insertNode(2);
        ll.insertNode(3);
        ll.insertNode(2);
        ll.insertNode(1);
        ll.insertNode(1);

        ll.removeDuplicate();
        ll.printList();
//        System.out.println("==================");
//        ll.printList();

    }
}
