package codes.ch3;

public class Q3_2 {
    static class Stack{
        class Node{
            int data;
            Node next;
            Node(int data){
                this.data = data;
            }
        }
        Node head;
        int min = Integer.MAX_VALUE;

        void push(int data){
            Node newNode = new Node(data);
            min = Math.min(min,data);
            newNode.next = head;
            head = newNode;
        }
//        void pop(){
//            if(head!=null)head = head.next;
//        }
        int front(){
            if(head!=null)return head.data;
            return -1;
        }
        void print(){
            Node itr = head;
            while(itr!=null){
                System.out.printf("-> %d ", itr.data);
                itr = itr.next;
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Stack stack = new Stack();
        stack.push(3);
        stack.push(2);
        stack.push(1);

        stack.print();
//        stack.pop();
        stack.print();

        System.out.println(stack.min);


    }
}
