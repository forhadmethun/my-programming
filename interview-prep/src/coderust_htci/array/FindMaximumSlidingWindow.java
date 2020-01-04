package coderust_htci.array;

import java.util.*;

/*
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.
*/

class FindMaximumSlidingWindow{
    void findMaximumSlidingWindow(int arr[], int k){
        Deque<Integer> q = new LinkedList<>();
        int i = 0;
        while(i < k){
            while(!q.isEmpty() && arr[i] >= arr[q.peekLast()]){
                q.removeLast();
            }
            q.addLast(i);
            i++;
        }
        while(i < arr.length ){
            System.out.print(arr[q.peek()] + " ");
            while(!q.isEmpty() && q.peek() <= i -k){
                q.removeFirst();
            }
            while(!q.isEmpty() && arr[i] >= arr[q.peekLast()]){
                q.removeLast();
            }
            q.addLast(i);
            i++;
        }
        System.out.print(arr[q.peek()] + " ");
        //need to print the last element
    }

    public static void main(String[] args){
        new FindMaximumSlidingWindow().findMaximumSlidingWindow(new int[]{ 12, 1, 78, 90, 57, 89, 56 }, 3);
    }
}

/**
-> ways to solve the problem
    => maintain a deque to store the index of all max elements so far
Deque q = new LinkedList(); 

for(int i = 0; i < k; i++){
    
}
 */





 