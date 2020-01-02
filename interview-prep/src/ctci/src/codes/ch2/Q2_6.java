package codes.ch2;
class Q2_6{
    static LinkedList reversedLinkedList = new LinkedList();
    static class Node{
        int data;
        Node next;
        Node(int data){this.data = data;}
    }
    static class LinkedList{
        Node head;
        private Node reversedHead;
        void insert(int data){
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
        void print(){
            Node tempHead = head;
            while(tempHead!=null){
                System.out.printf(" %d",tempHead.data);
                tempHead = tempHead.next;
            }
            System.out.println();
        }
        private void reversedHead(Node node){
            if(node==null)return;
            Node newNode = new Node(node.data);
            newNode.next = reversedHead;
            reversedHead = newNode;
            reversedHead(node.next);
        }
        boolean isPalindrome(){
            Node head1 = head;
            reversedHead(head1);
            Node head2 = reversedHead;
            while(head1!=null){
                if(head1.data!=head2.data)return false;
                head1 = head1.next;
                head2 = head2.next;
            }
            return true;
        }

    }
    static void  reverse(Node node){
        if(node==null)return;
        reversedLinkedList.insert(node.data);
        reverse(node.next);
    }
    static boolean isPalindrome(LinkedList l1, LinkedList l2){
        Node head1 = l1.head;
        Node head2 = l2.head;
        while(head1!=null){
            if(head1.data!=head2.data)return false;
            head1 = head1.next;
            head2 = head2.next;
        }
        return true;

    }
    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.insert(1);
        ll.insert(2);
        ll.insert(3);
        ll.insert(4);
        ll.insert(4);
        ll.insert(3);
        ll.insert(2);
//        ll.insert(1);
//        ll.reversedHead();
        ll.print();
        reverse(ll.head);
        reversedLinkedList.print();
        if(isPalindrome(ll,reversedLinkedList)) {System.out.println("Palindrome");}
        else System.out.println("Not Palindrome");

        if(ll.isPalindrome()){
            System.out.println("palin");
        }else{
            System.out.println("not palin");
        }


    }
}