package codes.ch2;

public class Q2_2 {
    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.insert(1);
        ll.insert(2);
        ll.insert(3);
        ll.insert(1);
        ll.insert(1);
        ll.insert(2);
        ll.insert(2);
        ll.insert(3);
        ll.insert(4);
        System.out.println(ll.findKthLastNode(4).data);
        System.out.println(ll.findKthFirstNode(4).data);
    }

    static class LinkedList {
        Node head;
        void insert(int data) {
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
        class Node {
            int data;
            Node next;
            Node(int data) { this.data = data;}
        }
        int length(){
            int len = 0;
            Node temp = head;
            while(temp!=null){
                len++;
                temp = temp.next;
            }
            return len;
        }
        Node findKthLastNode(int k){
            Node temp = head;
            int length = length();
            for(int i=1;i< length -k+1;i++)temp = temp.next;
            return temp;
        }
        Node findKthFirstNode(int k){
            Node temp = head;
            int length = length();
            if(k>length){
                System.out.println("Enter element less than List length.");
                return null;
            }
            for(int i=1;i<k;i++){
                temp = temp.next;
            }
            return temp;
        }


    }
}
