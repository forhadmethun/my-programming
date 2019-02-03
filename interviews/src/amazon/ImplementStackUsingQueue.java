package amazon;
import java.util.*;
public class ImplementStackUsingQueue {
    static class Stack{
        static Queue<Integer> q1 = new LinkedList<>();
        static Queue<Integer> q2 = new LinkedList<>();
        static int top;
        // push
        static void push(int value){
           q1.add(value);
           top = value;
        }

        // top -- this logic was not right
        // as after pop the top should be changed
        static int top(){
            return top;
        }

        // pop
        // remove all elements except the rear one to another queue
        // remove the rear element of the stack
        // re-transfer the element

        static void pop(){
            while(q1.size()>1){
                // top should be updated when popping
                // top will be updated till the last element
                // so top will be the 2nd element from the queue rear
                top = q1.poll();
                q2.add(top);
            }
            q1.poll();
            while(!q2.isEmpty()){
                q1.add(q2.poll());
            }
        }

    }

    static class StackUsingOneQueue{
        static LinkedList<Integer> queue = new LinkedList<>(); // we need to use LinkedList as for queue we can't insert data from the rear
        static void push(int value){
            queue.add(value);

            int size = queue.size();
            while(size>1){
                int front = queue.poll();
                queue.addLast(front);
                size--;

            }
        }

        static int top(){
            return queue.getFirst();
        }
        static void pop(){
            queue.pollFirst();
        }
    }

    public static void main(String[] args) {
        Stack.push(1);
        Stack.push(2);
        Stack.push(3);

        System.out.println(Stack.top()); // top of the stack should be 3

        Stack.pop(); // top of element is removed so now top should be 2
        System.out.println(Stack.top());

        System.out.println("========================================");

        StackUsingOneQueue.push(1);
        StackUsingOneQueue.push(2);
        StackUsingOneQueue.push(3);

        System.out.println(StackUsingOneQueue.top()); // top of the stack should be 3

        StackUsingOneQueue.pop(); // top of element is removed so now top should be 2
        System.out.println(StackUsingOneQueue.top());
    }
}
