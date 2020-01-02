package leetcode.LinkedList;

import java.util.*;


// class ListNode {
//    int val;
//    ListNode next;
//    ListNode(int x) { val = x; }
//}
class ReverseLinkedList {
    public ListNode reverseList(ListNode head) {
       //return reverseListRec(head);
        return reverseListIter(head);
    }
    
    ListNode reverseListRec(ListNode head){
         if(head == null || head.next == null) return head; 
        ListNode newHead = reverseListRec(head.next);
        head.next.next = head;
        head.next = null;
        return newHead;
    }
    ListNode reverseListIter(ListNode head){
        ListNode prev, cur, next; 
        prev = null; 
        cur = head; 
        while(cur != null){
            next = cur.next; 
            cur.next = prev; 
            prev = cur;
            cur = next;
        }
        return prev;
        
    }
}