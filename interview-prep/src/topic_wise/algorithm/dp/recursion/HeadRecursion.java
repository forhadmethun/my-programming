package topic_wise.algorithm.dp.recursion;

public class HeadRecursion {
    static class Node{
        int data;
        Node next;
    }
    void headTraverse(Node head){
        if(head != null){
            headTraverse(head.next);
            System.out.println(head.data);
        }
    }
}
