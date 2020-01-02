package codes.ch3;

import java.util.Stack;

public class Q3_4 {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }
    static class Stack{
        Node top;
        void push(int data){
            Node newNode = new Node(data);
            newNode.next = top;
            top = newNode;
        }
        int pop(){
            Node tempNode = top;
            if(top!=null)top=top.next;
            return tempNode.data;
        }
        boolean isEmpty(){
            Node tempNode = top;
            if(tempNode==null) return true;
            else return false;
        }
    }
    static class Queue{
        Stack stack1 = new Stack();
        Stack stack2 = new Stack();
        void add(int data){
            stack1.push(data);
        }
        void remove(){
//            stack1.pop();
            //first move all stack element to 2nd stack
            //remove the last element
            //enqueue all elements from 2nd stack to first stack

            while(!stack1.isEmpty()){
                int data = stack1.pop();
                stack2.push(data);
            }
            stack2.pop();
            while (!stack2.isEmpty()) {
                int data = stack2.pop();
                stack1.push(data);
            }
        }
        int peek(){
            Node tempNode = stack1.top;
            if(tempNode==null) return -1;
            while(tempNode.next!=null){
                tempNode = tempNode.next;
            }
            return tempNode.data;
        }

    }
    public static void main(String[] args){
        Queue queue = new Queue();
        queue.add(1);
        queue.add(2);
        queue.add(3);
        queue.add(4);
        queue.remove();
    }
}
