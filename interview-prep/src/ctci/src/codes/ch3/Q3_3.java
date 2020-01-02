package codes.ch3;

import java.util.Random;

public class Q3_3 {
    public static void main(String[] args) {

        int howManyData = 5;
        StackList stackList = new StackList();


        while (howManyData > 0) {
            int stackSize = 2;
            Stack stack = new Stack();
            while (stackSize > 0) {
                if(howManyData>0)stack.push(howManyData);
                stackSize--;
                howManyData--;
            }
//            stack.push(2);
//            stack.push(1);
//
//            Stack stack2 = new Stack();
//            stack2.push(1);
//            stack2.push(2);
//
//            stackList.insert(stack2);
            stackList.insert(stack);



        }

        stackList.pop();
    }

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    static class Stack {
        Node head;
        Stack next;

        int peek() {
            if (head != null) return head.data;
            return 0;
        }

        void pop() {
            head = head.next;
        }

        void push(int data) {
            Node newNode = new Node(data);
            newNode.next = head;
            head = newNode;
        }
    }

    static class StackList {
        Stack head;

        void insert(Stack stack) {
//            Stack stack = new Stack(stack)
            stack.next = head;
            head = stack;
        }

        void pop(){
            if(head!=null){
                if(head.head!=null && head.head.next!=null){
                    head.head = head.head.next;
                }
                else{
                    head = head.next;
                }
            }
        }

    }
}
