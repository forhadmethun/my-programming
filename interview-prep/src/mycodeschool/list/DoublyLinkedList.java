package mycodeschool;

class DoublyLinkedListNode{
    int data; 
    DoublyLinkedListNode next; 
    DoublyLinkedListNode prev;
    DoublyLinkedListNode(int data){
        this.data = data; 
        this.next = null;
        this.prev= null;
    }

}

class DoublyLinkedList{
    DoublyLinkedListNode head = null; 
    DoublyLinkedList(){
        this.head = null;
    }
    void insertAtHead(int data){
        DoublyLinkedListNode newNode = new DoublyLinkedListNode(data); 
        if(head == null){
            head = newNode; 
            return;
        }
        head.prev = newNode; 
        newNode.next = head;
        head = newNode;
    }
    void print(){
        DoublyLinkedListNode tempNode = head; 
        while(tempNode!=null){
            System.out.printf("%d ", tempNode.data); 
            tempNode = tempNode.next;
        }
        System.out.println();
    }

    public static void main(String[] args){
        DoublyLinkedList dll = new DoublyLinkedList(); 
        dll.insertAtHead(2);
        dll.insertAtHead(1);
        dll.print();
    }
}