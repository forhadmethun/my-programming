package topic_wise.algorithm.dp.recursion;

public class TailRecursion {
    static class Node{
        int data;
        Node next;
    }
    void tailTraverse(Node head){
        if(head != null){
            System.out.println(head.data);
            tailTraverse(head.next);
        }
    }
}
