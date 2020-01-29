package leetcode.LinkedList;

public class DeleteNodeinaLinkedList_237 {
    public void deleteNode(ListNode node) {
        /*
        int count = 0;
        ListNode temp = head;
        while(temp.val != node.val){
            temp = temp.next;
            count++;
        }
        temp = head;
        for(int i = 0; i < count - 2; i++){
            temp = temp.next;
        }
        temp.next = temp.next.next;
        */
        node.val=node.next.val;
        node.next=node.next.next;
    }
}
