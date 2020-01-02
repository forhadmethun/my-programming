package codes.ch2;

public class Q2_8 {
    static class Node{
        int data;
        Node next;
        Node(int data){this.data = data;}
    }
    static class LinkedList{
        Node head;
        void insert(Node newNode){
            newNode.next = head;
            head = newNode;
        }

        Node returnBeginningOfCircularLinkList(){
            if(head==null)return null;
            Node slow = head;
            Node fast = head.next;
            while(true){
                if(slow==null || fast == null) return null;
                if(slow == fast)return slow;
                slow = slow.next;
                fast = fast.next.next;
            }
        }
    }
    public static void main(String[] args){
        Node n1 = new Node(1);
        Node n2 = new Node(2);
        Node n3 = new Node(3);

        LinkedList l = new LinkedList();
        l.insert(n1);
        l.insert(n2);
        l.insert(n3);
        l.head.next.next.next = n3;

        Node out = l.returnBeginningOfCircularLinkList();
        if(out!=null)System.out.println(out.data);
        else System.out.println("No circular link found");

    }
}
