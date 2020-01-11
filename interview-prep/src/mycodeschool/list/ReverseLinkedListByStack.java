package mycodeschool.list;
class ReverseLinkedListByStack{
    public static void main(String[] args){
        SinglyLinkedList ll = new SinglyLinkedList(); 
        ll.addToHead(8);
        ll.addToHead(3);
        ll.addToHead(5);
        ll.addToHead(2);
        ll.print();
        reverseByStack(ll); 
        ll.print();
    }
    static void reverseByStack(SinglyLinkedList ll){
        java.util.Stack<LinkedListNode> stack = new java.util.Stack<LinkedListNode>(); 
        LinkedListNode tempHeadNode = ll.head; 
        while(tempHeadNode != null){
            stack.push(tempHeadNode); 
            tempHeadNode = tempHeadNode.next; 
        }   
        ll.head = stack.peek(); 
        tempHeadNode = ll.head;    
        stack.pop();

        while(!stack.isEmpty()){
            tempHeadNode.next = stack.peek(); 
            stack.pop(); 
            tempHeadNode = tempHeadNode.next; 
        }
        tempHeadNode.next = null;
    }

}