package codes.ch2;

public class Q2_3 {
    static class LinkedList{
        Node head;
        class Node{
            int data;
            Node next;
            Node(int data){
                this.data = data;
            }
        }
        void insert(int data){
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
        void deleteMiddle(){
            int len = 0;
            Node temp = head;
            while(temp!=null){
                len++;
                temp = temp.next;
            }
            if(len == 0 || len == 1){
                head = null;
                return;
            }
            else if(len == 2){
                head = head.next;
                return;
            }
            int mid =(int) Math.ceil((double)len/2.0);
            temp = head;
            for(int i=0;i<mid-2;i++){
                temp = temp.next;
            }
//            if(temp.next!=null){
                temp.next = temp.next.next;
//            }
        }
        void print(){
            Node temp = head;
            while(temp!=null){
                System.out.println(temp.data);
                temp = temp.next;
            }
        }
    }

    public static void main(String[] args){
        LinkedList ll = new LinkedList();
        ll.insert(5);
        ll.insert(4);
        ll.insert(3);
        ll.insert(2);
        ll.insert(1);
        ll.deleteMiddle();
        ll.print();

    }
}
