# Array
---
##### Rotation
1. rotate array  
  a. right rotate  
  b. left rotate
  
2. cyclically rotate an array by one
3. search an element in a sorted and rotated array in `O(logn)`
4. in a sorted and rotated array find if there is a pair with a given sum
5. find maximum value of sum (i*arr[i]) with only rotation on given array allowed
6. find the rotation count in rotated sorted array
7. find the minimum element in a sorted and rotated array
8. find a rotation with maximum hamming distance 
   - Given an array of n elements, create a new array which is a rotation of given array and hamming distance (# of positions at which corresponding elements are different) between both the array is maximum
##### rearrangement
9. split the array and first part to the end
10. rearrange an array such that arr[i] = i 
    - if i not present display -1 at that place 
11. write a program to reverse an array 
12. rearrange array such that arr[i]>=arr[j] if i is even and arr[i]<=arr[j] if i is odd and j<i
13. rearrange array in alternating positive and negative items with O(1) extra space
14. move all zeros to the end of array
15. minimum swap required to bring all elements less than or equal to k together
16. rearrange an array in order- smallest, largest, 2nd smallest, 2nd largest, ...
17. if next valid number is same as current then double the current value and replace next value with 0 and move all zero to the end
18. reorder an array according to given indexes
19. rearrange positive and negative numbers with constant extra space
20. rearrange an array such that arr[j] becomes i
21. arrange given numbers to form the biggest number 
22. replace every array element by multiplication of previous and next
    - first element with first and second & last element with last and 2nd last
23. segregate even and odd number in the array
##### Order
24. Find the k'th largest element in an array (heap)
25. Find the largest three elements in an array
26. Given an n*n matrix, where row and column are sorted in non-decreasing order. Find the kth smallest element in the given 2D array.
27. mean and median of an unsorted array
28. find median of all elements read so far starting from the first integer till last integer
29. minimum product of k integers in an array of positive integers ( priority queue )
30. k-th largest sum of contiguous subarray within the array of numbers which has negative and positive numbers
31. k pairs maximum/minimum sum combinations from two arrays
32. k maximum sums of  contiguous sub-arrays (find - sum & index)
    - overlapping
    - non-overlapping ( kadane's algo )
         - find out k sub-arrays which have k maximum sums.
33. find k smallest elements in same order using O(1) extra space 
34. k-th smallest absolute difference of two elements in an array 
35. second (k)smallest/largest element of an array 
36. find k numbers with most occurrences in the given array 
37. find the smallest missing number from 0 to m-1 and m>n
38. maximum sum such that no two elements are adjacent
39. maximum and minimum of an array using minimum number of comparison
##### Range 
40. An array and set of query ranges given, need to find the sum of every query range (MO's Algorithm / square root decomposition / Sparse Table)
41. range minimum query 
42. range query for frequency of array elements ( unordered_map )
43. constant time range add operation on an array
    - given array of N initially contains 0. many range add query given. need to find the final result.
44. range lcm query
45. range gcd query 
46. gcd of all numbers except elements given in a range
47. number of elements less than or equal to given number in a range ( BIT )
48. query for counts of array elements with values in given range
49. a binary array given need to find the decimal value of a range
50. count elements which divide all numbers in range L - R
51. find 0<=x<=2^31 where sum of x-or of x with numbers within the range range is max possible (bit magic) 
52. find xor sum of numbers which appeared even # of times within a range
53. array range query for searching an element
54. maximum occurrence in given range
55. find k'th smallest number in a range in an array
56. total no repeated digits in a number range
57. range update query in a range

##### Optimization
58. largest sum contiguous sub-array (kadane)
59. maximum profit by buying and selling product twice
60. find sub-array of k length with minimum average
70. find minimum distance between number x and y in an array
    ```
    Input: arr[] = { 3,4,5}, x = 3, y = 5
    Output: 2
    ```
71. Minimize the maximum difference between heights
    ```
    Input: arr[] = {1,15,10}, k = 6
    Output: 5 // 1+6-> 7, 15-6 -> 9, 10-6 -> 4 =>max-diff(7,9,4)=>5
    ```
81. Each elements of an array represent max jump number from that element, find minimum number of jumps to reach the end of the array. 
    ``` 
    Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
    Output: 3(1->3->8->9)
    ```
82. Maximum Sum Increasing Subsequence (standard variation of LIS)
    ``` 
    Input1:{1,101,2,3,100,4,5}
    Output1:106(1+2+3+100)
    Input2:{3,4,5,10}
    Output2:22(3+4+5+10)
    Input3:{10,5,3,2}
    Output3: 10
    ```
83. Smallest sub-array with sum greater than a given value
    ``` 
    Input: arr[] = {1,4,45,6,0,19}, x = 51
    Output: 3 (4,45,6)
    ```
84. Find maximum average sub-array of k length
    ``` 
    Input: arr[] = {1,12,-5,-6,50,3}, k = 4
    Output: 51/4   = (12-5-6+50)/4
    ```
85. Count minimum steps to get the given desired array from array which contains zero(increment by 1 or double all value allowed)
    ``` 
    Input: {2,3}
    Output: 4 (1st incre both, 2nd double, 3rd incre 2nd element)
    ```
86. Number of subsets with product less than or equal to k 
    ``` 
    Input: arr[] = {2,4,5,3}, k = 12
    Output: 8 ({2},{4},{5},{3},{2,4},{2,5},{2,3},{4,3})
    ```
87. Minimum number of merge operations to make an array palindrome. merging elements means replace them with their sum
    ```
    Input: arr[] = {1,4,5,1}
    Output: 1 (merge 4,5 make 9)
    ```
88. Find smallest positive integer value that cannot be represented as sum of subset of a given sorted array
    ````
    Input: arr[] = {1,3,6,10,11,15}
    Output: 2
    ````
89. Find minimum difference between two elements 
    ``` 
    Input: arr[] = {1,5,3,19,18,25}
    Output: 1 ( between 19,18)
    ```
90. Longest span with same sum in two binary arrays
    ``` 
    Input: {0, 1, 0, 0, 0, 0}
    Output: {1, 0, 1, 0, 0, 1}
    ```

##### Sorting
91. Alternative Sorting. Print an array in a way that first element is first maximum and second element is first minimum and so on
    ``` 
    Input: arr[] = {7,1,2,3,4,5,6}
    Output: {7,1,6,2,5,3,4}
    ```
92. Sort a nearly sorted array(k sorted array). Each element is at most k away from its target position, devise algorithm that sorts in O(nlogk) time. 
    ``` 
    Input: {6, 5, 3, 2, 8, 10, 9}, k = 3
    Output: {2, 3 , 5, 6, 8, 9 , 10}
    ```
92. Sort an array according to absolute difference with given value. 
    ``` 
    Input: x = 7, arr[] = {10, 5, 3, 9, 2}
    Output:{5,9,10,3,2}(7-5 = 2, 7-9 = 2, 7-10 = 3, 7-3 =4, 7-2 = 5)
    ```
93. Sort an array in wave form. arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
    ``` 
    Input: {10, 5, 6, 3, 2, 20, 100, 80}
    Output: {10, 5, 6, 2, 20, 3, 100, 80} OR equivalent.
    ```
94. Merge an array of size n into another array of size m+n in sorted order
    ``` 
    Input: {2,8,13,15} & {5,7,9,25}
    Output: 2 5 7 8 9 13 15 20 25
    ```
95. Sort an array which contain 1 to n values
96. Sort 1 to N by swapping adjacent elements. another array given which contains boolean value indicates that A[i] can be swapped with A[i+1] or not.
    ``` 
    Input: {1, 2, 5, 3, 4, 6}
    Output:{0, 1, 1, 1, 0}
    ```
97. Sort an array containing two types of elements by traversing once 
    ``` 
    Input :  arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
    Output : arr[] = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
    ```
98. Sort elements by frequency
    ``` 
    Input:  arr[] = {2, 5, 2, 8, 5, 6, 8, 8}
    Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6}
    ```
99. Count Inversions in an array. Inversion count means how far(close) the array is from being sorted. If array is already sorted then inversion is minimum and reverse sorted then maximum. 
    ``` 
    Input:  2, 4, 1, 3, 5 
    Output: three inversions (2, 1), (4, 1), (4, 3)
    ```
100.

##### Searching
1. Search, insert and delete in 
    - unsorted array 
    - sorted array 
2. Given an array A[] and x, check for pair in A[] where sum equals to x
3. Search in an array where adjacent differ by at most k
4. Find common elements in three sorted array 
5. Find position of an element in a sorted array of infinite numbers
6. Find the only repetitive element between 1 to n-1
7. Find the element that appears once
8. Maximum subarray sum excluding certain elements
9. Maximum equilibrium sum(sum of elements of certain position in left side equal to the sum of other elements) in an array
10. Given an array arr[]. Find maximum value of prefix sum which is also suffix sum for index in in arr[]. 
11. Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 
12. An element is leader if it is greater than all the elements to its right side. 
13. Finding ceiling in a sorted array where ceiling of x is the smallest in array greater than or equal to x and floor is th greatest element smaller than or equal to x.
14. Check for majority element in sorted array
    - if an array has majority element
15. Find peak element. An array element is peak if it is not smaller than its neighbors(only one neighbor)
16. Find two repeating elements in a given array. N+2 elements given where elements range 1 to n. 
17. Find a fixed point( value equal to index) in a given array if not found print -1
18. Find subarray with given sum
19. Maximum triplet sum in array
20. Smallest difference triplet from three arrays(*)
21. Find triplet/pair that sum to a given value
22. Find all triplets with zero sum
23. Find triplets with sum smaller than a given value
24. Print all triplets in sorted array 
25. Number of unique triplets whose XOR is zero
26. Find a triplet such that sum of two equals to third element
27. Find the number occurring odd number of times(*)
28. Find the missing number
29. Count number of occurrences(or frequency) in a sorted array
30. Count 1's in a sorted binary array. 

##### Matrix

##### Misc

# Linked List
---- 
### Singly Linked List

1. Linked List insertion
   - end 
   - middle of linked list
   - after n node from the end
2. Linked List Deletion(key given)
3. Linked List Deletion(position given) 
4. Delete Linked List
5. Find Linked List Length
    - check if even or odd length
6. Search an element in Linked List
7. Get n'th node in Linked List
8. Get n'th node from the end in Linked List
9. Print middle of Linked List
10. Count number of times an integer occurs in Linked List 
11. Detect loop in linked list
12. Find length of loop in linked list
13. Check if linked list is palindrome
14. Remove duplicates from a sorted linked list
15. Remove duplicates from an unsorted linked list
16. Swap nodes in linked list without swapping data
17. Pairwise swap elements of a given linked list(, changing link)
18. Move last element to front of a given linked list
19. Intersection of two sorted linked lists
20. Intersection point of two linked list
21. Quick sort on Singly Linked List
22. Segregate even and odd elements in a linked list
23. Reverse a linked list (iterative, iterative with two pointers, recursive, group of given size, alternate k nodes)
24. Merge two sorted linked lists such that merged list is in reverse orderm
    - merge two sorted linked lists
    - merge two sorted linked list(in-place)
    - Merge k sorted linked lists
    - Merge k sorted linked lists using min heap
25. Delete alternatve nodes of a linked list
26. Alternating split of a given singly linked list
27. Identical linked lists
28. Delete nodes which have a greater value on right side 
29. Add/Subtract/multiply two numbers represented by linked lists
30. Delete a given node in linked list under given constraints
31. Find a triplet from three linked lists with sum equal to a given number
32. Rotate a linked list
    - block wise
33. Flattening a linked list
34. Sort a linked list of 0s, 1s & 2s
35. Flatten a multilevel linked list
36. Delete n nodes after m nodes of a linked list
37. Clone a linked list with next and random pointer
38. Insertion sort for singly linked list
39. Point to next higher value node in a linked list with an arbitrary pointer
40. Rearrange a given linked list in-place
41. Sort a linked list that is sorted alternating ascending and descending orders
42. Select a random node from a singly linked list
43. Compare two strings represented as linked list
44. Rearrange a linked list such that all even and odd positioned nodes are together
45. Rearrange a linked list in zig-zag fashion
46. Add 1 to a number represented as linked list
47. Generic linked list
48. Check linked list of strings forms palindrome
49. Sort linked list which is already sorted on absolute values
50. Delete last occurrence of an item from linked list
51. Decimal equivalent of binary linked list
52. Rearrange a linked list such that it consists of altenating minimum, maximum elements
53. Find pair for given sum in a sorted singly linked list without extra space
54. Partitioning a linked list around a given value and keeping the original order
55. Check linked list with a loop is palindrome or not
56. Clone linked list with next and random pointer in O(1) space (*)
57. Add two polynomials using linked list
58. Move all occurrences of an element to end in a linked list
59. Remove all occurrences of duplicates from a sorted linked list
60. Remove every k node of linked list
61. Find sum of last n nodes of the given linked list
62. Merge sort for linked lists
63. Merge a linked list into another linked list at alternate positions
64. In-place merge two linked lists without changing links of first list(*)
65. Find union and intersection of two linked lists
    - using merge sort 
    - hashing
66. Recursive selection sort for singly linked list | swapping node links
67. Linked list of n nodes which is first sorted, then rorated by k elements, find the value of k
68. Make middle node head in a linked list

### Doubly Linked List

1. Doubly Linked List Insertion
   - general insertion
   - sorted way in sorted doubly linked list
   - sorted insert with head and tail pointers
2. Delete node in a doubly linked list
   - with given value
   - with given position
   - all occurrences with given key 
3. Reverse a doubly linked list
4. Tree list recursion problem *
5. Sort doubly linked list
    - quick sort
    - merge sort 
    - insertion sort
    - biotonic
    - k sorted
6. Swap k node from beginning with the k node from the end
7. Create doubly linked list from 
    - ternery tree
    - binary tree
    - binary tree in spiral fashion
8. Find paris/triplet with given sum in doubly linked list
9. Remove duplicate from a sorted/unsorted doubly linked list
10. Find size of doubly linked list
11. Given two large numbers in form of strings. Use different arithmetic operation on these strings
12. Rotate doubly linked list by N nodes
13. Priority queue using doubly linked list
14. Reverse a doubly linked list in a group of given size
15. Sorted merge of two sorted doubly circular linked list
16. Find the largest node in doubly linked list
17. Memory efficient doubly linked list
18. Given a binary tree, extract all leaves of it in a doubly linked list. 
19. Merge two balanced binary search tree
20.  Check if a doubly lined list of characters is palindrome or not
21. XOR linked list
    - insert a new node at the beginning
    - traverse the list in forward direction



### Circular Linked List
1. Circular linked list implementation & traversal
    - insertion
    - deletion
2. Split a circular linked list into two halves
3. Sorted insert in circular linked list
4. Check if a linked list is a circular linked list
5. Convert a Binary Tree to a circular doubly linked list
6. Queue implementation with circular linked list
7. Count node in circular linked list
8. josephus circle with circular linked list
9. Convert singly linked list into circular linked list
10. Dequeue implementation with circular linked list
11. Exchange first and last node in Circular linked list


### Misc
- later

# Queue Problem Set
---
##### Implementation 

1. Implement queue using stack
2. LRU Cache Implementation 
3. Implement stack using queue
4. Implement queue using linked list
5. Implement k queues in a single array
6. Implement stack using single queue
7. Implement deque using circular array
8. Implement circular queue with linked list
9. Implement stack and queue using deque 
10. Implement priority queue using linked list
10. Implement priority queue using doubly linked list
11. Implement deque using doubly link list

####Implementation
1. queue
    - stack
    - linked list
    - deque
2. k queues
    - single array
3. deque
    - circular array
    - doubly link list
    
4. priority queue 
    - linked list
    - doubly linked list
    
5. stack
    - queue
    - deque
    
   

##### Standard Problem
1. Check if a queue can be sorted into another queue using a stack 
```
    Input : Queue[] = { 5, 1, 2, 3, 4 }
    Output : Yes
    Pop the first element of the given Queue i.e 5.
    Push 5 into the stack.
    Now, pop all the elements of the given Queue and push them to
    second Queue.
    Now, pop element 5 in the stack and push it to the second Queue.
``` 
2. BFS for a graph
3. Level Order tree traversal
4. Reverse path in BST*
5. Construct Complete BST with Linked List Representation
6. Page replacement algorithm*
7. Check whether a given binary tree is complete or not
8. zigzag tree traversal right -> left ->right ... 
9. Number of siblings of a given node in n-ary tree

##### Operations
1. Reverse a queue
2. Reverse a queue using recursion
3. Reverse first k elements of a queue
4. Interleave the first half of the queue with second half
5. Sorting a queue without using extra space

##### Misc
1. Maximum of all subarrays of size k( Sliding Window Maximum) 
``` 
    Input :
    arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}
    k = 3
    Output :
    3 3 4 5 5 5 6
    
```
2. Find the largest multiple of 3 using queue 
3. Smallest multiple of a given number made of digits 0 & 9 only
4. Iterative method to find the height of a binary tree
5. Implement priority queue through comparator in java
6. print all binary number from 1 to n using queu e
7. find maximum level sum in binary tree
8. sum of minimum and maximum elements of all subarrays of size k. 
``` 
Input : arr[] = {2, 5, -1, 7, -3, -1, -2}  
        K = 4
Output : 18
Explanation : Subarrays of size 4 are : 
     {2, 5, -1, 7},   min + max = -1 + 7 = 6
     {5, -1, 7, -3},  min + max = -3 + 7 = 4      
     {-1, 7, -3, -1}, min + max = -3 + 7 = 4
     {7, -3, -1, -2}, min + max = -3 + 7 = 4   
     Sum of all min & max = 6 + 4 + 4 + 4 
                          = 18      

```
9. Distance of nearest cell having 1 in a binary matrix 
``` 
Input : N = 3, M = 4
        mat[][] = { 
                    0, 0, 0, 1,
                    0, 0, 1, 1,
                    0, 1, 1, 0 
                  }
Output : 3 2 1 0
         2 1 0 0
         1 0 0 1

For cell at (0, 0), nearest 1 is at (0, 3),
so distance = (0 - 0) + (3 - 0) = 3.
Similarly all the distance can be calculated.
```
10. Level Order traversal new line by new line  
11. First negative integer in every window of size k if not found print zero 
12. Minimum sum of square of character counts in a given string after removing k characters. ( PQ )
``` 
Input :  str = abccc, K = 1
Output :  6
We remove c to get the value as 11 + 11 + 22

Input :  str = aaab, K = 2
Output :  2
```
13. Average of levels in Binary Tree
14. Check if an array is stack permutation of other
15. Check if all levels of two trees are anagams or not
16. Check mirror in n-ary tree

# Stack Problem Set
#####Design and Implementation
1. Implement Queue using Stack 
2. Implement stack which has getMin(), findMiddle(), deleteMiddle(),merge(Stack s1,Stack s2) method in O(1)
3. Implement two stacks in an array
4. Implement stack using queue
5. Implement k stacks in an array  
6. Implement stack using priority queue or heap
7. Implement stack and queue using deque


#####Standard Problems
8. Infix to postfix
9. Prefix to Infix
10. Prefix to Postfix
11. Postfix to Prefix
12. Stock Span Problem*
13. Check for balanced parentheses in an expression
14. Find next greater element
15. Find next greater frequency element
16. Number of NGEs to the right*
17. The Celebrity Problem - HaveAcquaintance(A, B) which returns true if A knows B, false otherwise.
18. Expression Evaluation
19. TOH
20. Print next greater number of Q queries in an array 
    ``` 
    Input : arr[] = {3, 4, 2, 7, 5, 8, 10, 6} 
            query indexes = {3, 6, 1}
    Output: 8 -1 7     
    Explanation : 
    For the 1st query index is 3, element is 7 and the next greater element at its right is 8 
    For the 2nd query index is 6, element is 10 and  there is no element greater then 10 at right,so print -1.
    For the 3rd query index is 1, element is 4 and the next greater element at its right is 7.
    ```
#####Operations on Stack
21. reverse stack using recursion
22. sort a stack using recursion
23. sort stack using temporary stack
24. reverse a stack without using extra space in O(n)
25. sorting array using stack
26. delete array elements which are smaller than next or become smaller
    ``` 
    Input:{20,10,25,30,40}
    Output:{25,30,40} (dynamic)
    ```
27. check if a queue can be sorted int another queue using stack
28. reverse individual words
    ```
    Input: Hello World
    Output:olleH dlroW
    ```
29. Check if an array is stack sortable. 

#####Misc
30. Merge overlapping interval
    ```
    {{1,3}, {2,4}, {5,7}, {6,8} }. The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}. Similarly {5, 7} and {6, 8} should be merged and become {5, 8}
    ```
31. largest rectangular area in a histogram
32. print ancestors of a given binary tree without recursion
33. find maximum depth of nested parenthesis in a string 
34. find maximum of minimum for every window size in a given array
35. length of longest valid substring
    ```
    Input:  ()(()))))
    Output: 6
    Explanation:  ()(())
    ```
36. Iterative Depth First Traversal of Graph
37. Minimum number of bracket reversal needed to make an expression balanced
    ```
    Input:  exp = "}{{}}{{{"
    Output: 3
    ```
38. Expression contains redundant bracket or not
    ``` 
    Input: (a+(b)/c)
    Output: Yes (because b is surrounded by ()) 
    
    Input: (a+b*(c-d))
    Output: No
    ```
39. Identify and marked unmatched parenthesis in an expression. closing as 1 opening as 0 and unbalanced as -1. 
40. Check if two expressions with brackets are same
    ```
    Input  : exp1 = "-(a+b+c)"
             exp2 = "-a-b-c"
    Output : Yes
    
    Input  : exp1 = "-(c+b+a)"
             exp2 = "-c-b-a"
    Output : Yes
    ```
41. Find index of closing bracket for a given opening bracket in an expression
    ```
    Input:  [ABC[23]][89]
    Output: 8
    ```
42. Check for balance parentheses in an expression
    ```
    Input:  “[()]{}{[()()]()}” 
    Output: true
    ```
43. Some places there is ‘X’ in place of any bracket. Determine whether by replacing all ‘X’s with appropriate bracket, is it possible to make a valid bracket sequence.
    ```
       Input:  "{(X[X])}"
       Output: balanced, {([[]])}.
       Input: [{X}(X)]
       Output: Not balanced
    ```
44. Check if given array can be represented preorder traversal of binary search tree. 
    ```
    Input:{2, 4, 3}
    Output:true   
    2
      4
     /
    3
    
    Input: {40, 30, 35, 20, 80, 100}
    Output: false
    ```
42. form minimum number from given sequence(*)
43. find if an expression has duplicate parenthesis or not 
    ```
    ((a+b)+((c+d)))
    The subexpression "c+d" is surrounded by two
    pairs of brackets.
    
    ((a+b)+(c+d)) 
    No subsexpression is surrounded by duplicate
    brackets.
    ```
44. Find next smaller of next greater in an array 
    ```
    Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
    Output:          2  2 -1  1 -1 -1 -1
    Explanation :  
    Next Greater ->      Right Smaller 
       5 ->  9             9 ->  2 
       1 ->  9             9 ->  2
       9 -> -1            -1 -> -1
       2 ->  5             5 ->  1
       5 ->  7             7 -> -1
       1 ->  7             7 -> -1
       7 -> -1            -1 -> -1 
    
    Input  : arr[] = {4, 8, 2, 1, 9, 5, 6, 3}
    Output :          2  5  5  5 -1  3 -1 -1 
    ```
45. Find maximum sum possible equal sum of three stacks. 
    ```
        https://www.geeksforgeeks.org/wp-content/uploads/Find-maximum-sum-possible-equal-sum-of-three-stacks-2.png
    ```
46. from list of consecutive words if two consecutive words are same then destroy them and return the size. 

    ``` 
    Input : ab aa aa bcd ab
    Output : 3
    As aa, aa destroys each other so, ab bcd ab is the
    new sequence.
    
    Input :  tom jerry jerry tom
    Output : 0
    ```  
47. Decode string recursively encoded as count followed by substring
    ``` 
    Input : str[] = "1[b]"
    Output : b
    
    Input : str[] = "2[ab]"
    Output : abab
    
    Input : str[] = "2[a2[b]]"
    Output : abbabb
    
    Input : str[] = "3[b2[ca]]"
    Output : bcacabcacabcaca
    
    ```
48. Bubble sort using two stacks
49. Pattern Occurrences : Stack Implementation 
    ``` 
    Input : 
    Pattern : ABC
    Text : ABABCABCC
    Output :
    3
    Occurrences found at: 
    4 7 8
    Explanation
    Occurrences and their removal in the order
    1. ABABCABCC
    2. ABABCC
    3. ABC
    ```
50. find ancestors of a given binary tree
    ``` 
    Input : 
                1
            /       \
           2         7
         /   \     /   \
        3     5    8    9 
       /       \       /
      4         6     10 
    Key = 6 
    
    Output : 5 2 1
    Ancestors of 6 are 5, 2 and 1.
    ```
51. Tracking current Maximum Element in a Stack
    ``` 
    Input : 4 19 7 14 20
    Output : Max Values in stack are 
             4 19 19 19 20
    
    Input : 40 19 7 14 20 5
    Output :  Max Values in stack are 
             40 40 40 40 40 40
    ```
    
52. Check two n-array trees are mirror or not
53. Reverse a number using stack
54. reverse first k elements in a queue. 
55. reversing a queue
56. check if stack elements are pairwise consecutive
    ``` 
    Input : stack = [4, 5, -2, -3, 11, 10, 5, 6, 20]
    Output : Yes
    Each of the pairs (4, 5), (-2, -3), (11, 10) and
    (5, 6) consists of consecutive numbers.
    
    Input : stack = [4, 6, 6, 7, 4, 3]
    Output : No
    (4, 6) are not consecutive.
    
    ```
57. A spaghetti stack is an N-ary tree data structure in which child nodes have pointers to the parent nodes (but not vice-versa)
58. Interleave the first half of the queue with second half
    ``` 
    Input :  1 2 3 4
    Output : 1 3 2 4
    
    Input : 11 12 13 14 15 16 17 18 19 20
    Output : 11 16 12 17 13 18 14 19 15 20
    ```
59. remove brackets from an algebric string containing + & - operation 
    ``` 
    Input : "a-(b+c)"
    Output : "a-b-c"
    
    Input : "a-(b-c-(d+e))-f"
    Output : "a-b+c+d+e-f" 
    ```
60. an implementation of stack is considered its size is pre-determined or fixed. Even though it is dynamically allocated, still once it is made its size cannot be changed. And hence a condition called “stack full” arises.

        https://cdncontribute.geeksforgeeks.org/wp-content/uploads/growable-stack.png

61. Range queries for longest correct bracket subsequence 
      ``` 
      Input : S = ())(())(())(
              Start Index of Range = 0, 
              End Index of Range = 11
      Output : 10
      Explanation:  Longest Correct Bracket Subsequence is ()(())(())
      
      Input : S = ())(())(())(
              Start Index of Range = 1, 
              End Index of Range = 2
      Output : 0
      ```
62. Stack Permutations (Check if an array is stack permutation of other) (*)


# Tree Problem Set 
--- 
### Introduction
 1. Introduction
 2. Properties
 3. Types of Binary Tree
 4. Tree Properties & Handshaking Lemma
 5. How many different (un)labeled binary tree can be there with n nodes
 6. Insertion in a Binary Tree
 7. Deletion in a Binary Tree
 8. BFS vs DFS for Binary Tree
 9. Array Implementation of Binary Tree
 10. AVL with duplicate keys
   - avl tree with count with every key
 11. Tree DS Application
 12. MST Application
 13. Check if Continuous tree
  - if root to leaf path, absolute difference between keys of two adjacent is 1 is called continuous tree
 14. Foldable Binary trees
  - if left and right subtree are structure wise mirror image of each other. empty tree is considered as foldable
 15. Postfix to infix with tree
 16. Evaluation of expression tree

### Traversals
1. ~~Tree traversals(in, pre, post)(ref: Data Structure/tree/src/TreeTraversal.java)~~
2. Inorder traversal without recursion
3. inorder traversal without recursion & without stack
4. print postorder traversal from given inorder and preorder traversals
5. Find postorder traversal of bst from preorder traversal
6. find all possible binary trees with given inorder traversal
7. replace each node in binary tree with the sum of its inorder predecessor and successor
8. ~~populate inorder successor for all nodes(ref:  ~~
9. find n-th node of inorder traversal
10. find n-th node in postorder traversal of a binary tree
11. level order tree traversal
12. level order tree traversal line by line
13. level order traversal with direction change after every two levels
14. reverse level order traversal from bottom to top
15. reverse tree path*
16. binary tree traversal level order with specific criteria top to bottom
17. binary tree traversal level order with specific criteria bottom to top
18. Reverse alternate levels of a prefect binary tree
19. Morris traversal for Preorder*
20. Iterative Preorder traversal
21. Iterative Postorder traversal using two stacks
22. Iterative Postorder traversal using one stack
23. Postorder traversal without recursion & without stack
24. Diagonal traversal of a binary tree
    - right way diagonal
25. Iterative diagonal traversal of a binary tree
26. Boundary traversal of binary tree
27. ~~find density = size/ height of a tree(ref: Data Structure/tree/src/IsTreeHeightBalanced.java)~~ 
28. calculate depth of a fully tree from preorder
29. number of binary tree from preorder sequence length
30. modify a binary tree to get preorder traversal using right pointer only 

### Construction and Conversions
1. Construct tree from given inorder and postorder traversal
2. construct tree from given inorder and level order traversal
3. construct binary tree from it's linked list representation
4. construct a complete binary tree from given array in level order fashion
5. construct a full binary tree from given preorder and postorder traversals
6. construct a full binary tree from its preorder traversal and preorder traversal of its mirror tree
7. construct a special tree from given preorder traversal
    ``` 
    Input:  pre[] = {10, 30, 20, 5, 15},  preLN[] = {'N', 'N', 'L', 'L', 'L'}
    Output: Root of following tree
              10
             /  \
            30   15
           /  \
          20   5
    N-> non leaf node
    L-> leaf node
    ```
8. Construct tree from ancestor matrix
    ```
     mat[i][j] = 1 if i is ancestor of j
     mat[i][j] = 0, otherwise 
     
     
     
     Input: 0 1 1
            0 0 0 
            0 0 0 
     Output: Root of one of the below trees.
         0                0
       /   \     OR     /   \
      1     2          2     1
     
     Input: 0 0 0 0 0 0 
            1 0 0 0 1 0 
            0 0 0 1 0 0 
            0 0 0 0 0 0 
            0 0 0 0 0 0 
            1 1 1 1 1 0
     Output: Root of one of the below trees.
           5              5               5
        /    \           / \            /   \
       1      2   OR    2   1    OR    1     2  OR ....
      /  \   /        /    /  \       / \    /
     0   4  3        3    0    4     4   0  3
     There are different possible outputs because ancestor
     matrix doesn't store that which child is left and which
     is right.
     
    ```
9. Construct ancestor matrix from a given binary tree
10. Given inorder traversal of a Special Binay Tree in which key of every node is greater than keys in left and right children, construct the Binary Tree and return 
    ``` 
    Input: inorder[] = {5, 10, 40, 30, 28}
    Output: root of following tree
             40
           /   \
          10     30
         /         \
        5          28 
    
    Input: inorder[] = {1, 5, 10, 40, 30, 
                        15, 28, 20}
    Output: root of following tree
              40
            /   \
           10     30
          /         \
         5          28
        /          /  \
       1         15    20
    
    ```
 
11.  Construct binary tree from given parent array representation
 ``` 
          Input: parent[] = {1, 5, 5, 2, 2, -1, 3}
         Output: root of below tree
                   5
                 /  \
                1    2
               /    / \
              0    3   4
                  /
                 6 
         Explanation: 
         Index of -1 is 5.  So 5 is root.  
         5 is present at indexes 1 and 2.  So 1 and 2 are
         children of 5.  
         1 is present at index 0, so 0 is child of 1.
         2 is present at indexes 3 and 4.  So 3 and 4 are
         children of 2.  
         3 is present at index 6, so 6 is child of 3.
         
         Input: parent[] = {-1, 0, 0, 1, 1, 3, 5};
         Output: root of below tree
                  0
                /   \
               1     2
              / \
             3   4
            /
           5 
          /
         6
 ``` 
12. Construct a Binay Tree from Postorder and Inorder
13. Create a Doubly Linked List from ternary Tree
14. Creating a tree with left-child right-sibling representation*
15. prufer code to tree creation*
16. ~~Invert a binary tree(ref: /Code/interviews/src/anki-coding/tree/invert-binary-tree.cpp)~~

## BST 
#### Basic :

1. Binary Search Tree | Set 1 (Search and Insertion)
2. Binary Search Tree | Set 2 (Delete)
3. Advantages of BST over Hash Table

#### Construction and Conversion :

1. Construct BST from given preorder traversal | Set 1
2. Construct BST from given preorder traversal | Set 2
3. Binary Tree to Binary Search Tree Conversion
4. Sorted Linked List to Balanced BST
5. Sorted Array to Balanced BST
6. Transform a BST to greater sum tree
7. Construct all possible BSTs for keys 1 to N
8. Convert a BST to a Binary Tree such that sum of all greater keys is added to every key
9. BST to a Tree with sum of all smaller keys
10. In-place Convert BST into a Min-Heap
11. Convert BST to Min Heap
12. Construct BST from its given level order traversal
13. Reverse a path in BST using queue
14. Binary Tree to Binary Search Tree Conversion using STL set
15. Check given array of size n can represent BST of n levels or not
16. Convert a normal BST to Balanced BST
17. Merge Two Balanced Binary Search Trees
18. Merge two BSTs with limited extra space
19. ~~ Create a binary search tree with minimal height from a sorted array.~~



#### Checking and Searching :

1. Find the node with minimum value in a Binary Search Tree  
2. Check if the given array can represent Level Order Traversal of Binary Search Tree  
3. Check if a given array can represent Preorder Traversal of Binary Search Tree  
4. Lowest Common Ancestor in a Binary Search Tree  
5. A program to check if a binary tree is BST or not  
6. Find k-th smallest element in BST (Order Statistics in BST)  
7. Check if each internal node of a BST has exactly one child  
8. Check for Identical BSTs without building the trees  
9. K’th Largest Element in BST when modification to BST is not allowed  
10. K’th Largest element in BST using constant extra space  
11. Second largest element in BST  
12. K’th smallest element in BST using O(1) Extra Space  
13. Check if given sorted sub-sequence exists in binary search tree  
Simple Recursive solution to check whether BST contains dead end  
Check if an array represents Inorder of Binary Search tree or not  
Check if two BSTs contain same set of elements  
Largest number in BST which is less than or equal to N  
Maximum Unique Element in every subarray of size K  
Iterative searching in Binary Search Tree  
Find distance between two nodes of a Binary Search Tree  
Count pairs from two BSTs whose sum is equal to a given value x  
Find median of BST in O(n) time and O(1) space  
Largest BST in a Binary Tree | Set 2  
Remove BST keys outside the given range  
Print BST keys in the given range  
Print BST keys in given Range | O(1) Space  
Count BST nodes that lie in a given range  
Count BST subtrees that lie in given range  
Remove all leaf nodes from the binary search tree  
Sum of k smallest elements in BST  
Inorder Successor in Binary Search Tree  
Inorder predecessor and successor for a given key in BST  
Inorder predecessor and successor for a given key in BST | Iterative Approach  
Find if there is a triplet in a Balanced BST that adds to zero  
Find a pair with given sum in a Balanced BST  
Find a pair with given sum in BST  
Maximum element between two nodes of BST  
Find pairs with given sum such that pair elements lie in different BSTs  
Find the closest element in Binary Search Tree  
Find the largest BST subtree in a given Binary Tree  
Replace every element with the least greater element on its right  
Add all greater values to every node in a given BST  
#### Red Black Tree and Threaded Binary Tree : 

C Program for Red Black Tree Insertion  
Left Leaning Red Black Tree (Insertion)  
Threaded Binary Tree  
Threaded Binary Tree | Insertion  
Threaded Binary Search Tree | Deletion  
Convert a Binary Tree to Threaded binary tree | Set 1 (Using Queue)  
Convert a Binary Tree to Threaded binary tree | Set 2 (Efficient)  
Threaded Binary Tree  
Inorder Non-threaded Binary Tree Traversal without Recursion or Stack  
#### Misc :

Sorted order printing of a given array that represents a BST  
Two nodes of a BST are swapped, correct the BST  
Floor and Ceil from a BST  
Given n appointments, find all conflicting appointments  
How to handle duplicates in Binary Search Tree?  
Data Structure for a single resource reservations  
How to implement decrease key or change key in Binary Search Tree?  
Print Common Nodes in Two Binary Search Trees  
Count inversions in an array | Set 2 (Using Self-Balancing BST)  
Leaf nodes from Preorder of a Binary Search Tree  
Leaf nodes from Preorder of a Binary Search Tree (Using Recursion)  
Binary Search Tree insert with Parent Pointer  
Minimum Possible value of |ai + aj – k| for given array and k.  
Rank of an element in a stream  
Special two digit numbers in a Binary Search Tree  


# Graph Problem Set 

### Introduction, DFS and BFS :
1. ~~Graph and its representations~~
2. ~~Breadth First Traversal for a Graph(ref: Code/interviews/src/anki-coding/graph/breadth-first-search.cpp)~~
3. ~~Depth First Traversal for a Graph~~
4. Applications of Depth First Search
5. Applications of Breadth First Traversal
6. Graph representations using set and hash
7. Find Mother Vertex in a Graph
8. Transitive Closure of a Graph using DFS
9. Find K cores of an undirected Graph
10. Iterative Depth First Search
11. Count the number of nodes at given level in a tree using BFS
12. Count all possible paths between two vertices
13. Minimum initial vertices to traverse whole matrix with given conditions
14. Shortest path to reach one prime to other by changing single digit at a time
15. Water Jug problem using BFS
16. Count number of trees in a forest
17. BFS using vectors & queue as per the algorithm of CLRS
18. Level of Each node in a Tree from source node
19. Construct binary palindrome by repeated appending and trimming
20. Transpose graph
21. Path in a Rectangle with Circles
22. Height of a generic tree from parent array
23. BFS using STL for competitive coding
24. DFS for a n-ary tree (acyclic graph) represented as adjacency list
25. Maximum number of edges to be added to a tree so that it stays a Bipartite graph
26. A Peterson Graph Problem
27. Implementation of Graph in JavaScript
28. Print all paths from a given source to a destination using BFS
29. Minimum number of edges between two vertices of a Graph
30. Count nodes within K-distance from all nodes in a set
31. Bidirectional Search
32. Minimum edge reversals to make a root
33. BFS for Disconnected Graph
34. Move weighting scale alternate under given constraints
35. Best First Search (Informed Search)
36. Number of pair of positions in matrix which are not accessible
37. Maximum product of two non-intersecting paths in a tree
38. Delete Edge to minimize subtree sum difference
39. Find the minimum number of moves needed to move from one cell of matrix to another
40. Minimum steps to reach target by a Knight | Set 1
41. Minimum number of operation required to convert number x into y
42. Minimum steps to reach end of array under constraints
43. Find the smallest binary digit multiple of given number
44. Roots of a tree which give minimum height
45. Stepping Numbers
46. Clone an Undirected Graph
47. Sum of the minimum elements in all connected components of an undirected graph
48. Check if two nodes are on same path in a tree
49. A matrix probability question
50. Find length of the largest region in Boolean Matrix  
51. Iterative Deepening Search(IDS) or Iterative Deepening Depth First Search(IDDFS)  
### Graph Cycle :

Detect Cycle in a Directed Graph  
Detect cycle in an undirected graph  
Detect cycle in a direct graph using colors  
Assign directions to edges so that the directed graph remains acyclic  
Detect a negative cycle in a Graph | (Bellman Ford)  
Cycles of length n in an undirected and connected graph  
Detecting negative cycle using Floyd Warshall  
Check if there is a cycle with odd weight sum in an undirected graph  
Check if a graphs has a cycle of odd length  
Clone a Directed Acyclic Graph  
Check loop in array according to given constraints  
Disjoint Set (Or Union-Find) | Set 1  
Union-Find Algorithm | Set 2  
Union-Find Algorithm | (Union By Rank and Find by Optimized Path Compression)  
Magical Indices in an array  

### Topological Sorting

1. All topological sorts of a Directed Acyclic Graph  
2. Kahn’s Algorithm for Topological Sorting  
3. Maximum edges that can be added to DAG so that is remains DAG  
4. Longest path between any pair of vertices  
5. Longest Path in a Directed Acyclic Graph  
6. Longest Path in a Directed Acyclic Graph | Set 2  
7. Topological Sort of a graph using departure time of vertex  
8. Given a sorted dictionary of an alien language, find order of characters  
  
### Minimum Spanning Tree :
Prim’s Minimum Spanning Tree (MST))  
Applications of Minimum Spanning Tree Problem  
Prim’s MST for Adjacency List Representation  
Kruskal’s Minimum Spanning Tree Algorithm  
Boruvka’s algorithm for Minimum Spanning Tree  
Minimum cost to connect all cities  
Steiner Tree  
Reverse Delete Algorithm for Minimum Spanning Tree  
Total number of Spanning Trees in a Graph  
Minimum Product Spanning Tree  

### BackTracking :  
Find if there is a path of more than k length from a source  
Tug of War  
The Knight-Tour Problem  
Rat in a Maze  
n-Queen’s Problem  
m Coloring Problem  
Hamiltonian Cycle  
Permutation of numbers such that sum of two consecutive numbers is a perfect square  
  
### Shortest Paths :  
1. ~~Dijkstra’s shortest path algorithm~~  
2. ~~Dijkstra’s Algorithm for Adjacency List Representation(ref: /Code/interviews/src/anki-coding/graph/shortest-path-dijkstra.cpp)~~  
Bellman–Ford Algorithm  
Floyd Warshall Algorithm  
Johnson’s algorithm for All-pairs shortest paths  
Shortest Path in Directed Acyclic Graph  
Shortest path with exactly k edges in a directed and weighted graph  
Dial’s Algorithm  
Printing paths in Dijsktra’s Algorithm  
Shortest path of a weighted graph where weight is 1 or 2  
Multistage Graph (Shortest Path)  
Shortest path in an unweighted graph  
Minimize the number of weakly connected nodes  
Betweenness Centrality (Centrality Measure)  
Comparison of Dijkstra’s and Floyd–Warshall algorithms  
Karp’s minimum mean (or average) weight cycle algorithm  
0-1 BFS (Shortest Path in a Binary Weight Graph)  
Find minimum weight cycle in an undirected graph  
Minimum Cost Path with Left, Right, Bottom and Up moves allowed  
Minimum edges to reverse to make path from a src to a dest  
Find Shortest distance from a guard in a Bank  


### Connectivity :  
Find if there is a path between two vertices in a directed graph  
Connectivity in a directed graph  
Articulation Points (or Cut Vertices) in a Graph  
Biconnected Components   
Biconnected graph  
Bridges in a graph  
Eulerian path and circuit  
Fleury’s Algorithm for printing Eulerian Path or Circuit  
Strongly Connected Components  
Transitive closure of a graph  
Find the number of islands  
Find the number of Islands | Set 2 (Using Disjoint Set)  
Count all possible walks from a source to a destination with exactly k edges  
Euler Circuit in a Directed Graph  
Count the number of non-reachable nodes  
Find the Degree of a Particular vertex in a Graph  
Check if a given graph is tree or not  
Minimum edges required to add to make Euler Circuit  
Eulerian Path in undirected graph  
Find if there is a path of more than k length  
Length of shortest chain to reach the target word  
Print all paths from a given source to destination  
Find minimum cost to reach destination using train  
Find if an array of strings can be chained to form a   circle | Set 1   
Find if an array of strings can be chained to form a circle | Set 2  
Tarjan’s Algorithm to find strongly connected Components  
Number of loops of size k starting from a specific node  
Paths to travel each nodes using each edge (Seven Bridges of Königsberg)  
Number of cyclic elements in an array where we can jump according to value  
Number of groups formed in a graph of friends  
Minimum cost to connect weighted nodes represented as array  
Count single node isolated sub-graphs in a disconnected graph  
Calculate number of nodes between two vertices in an acyclic Graph by Disjoint Union method
Dynamic Connectivity | Set 1 (Incremental)  
Check if a graph is strongly connected | Set 1 (Kosaraju using DFS)  
Check if a given directed graph is strongly connected | Set 2 (Kosaraju using BFS)  
Check if removing a given edge disconnects a graph  
Find all reachable nodes from every node present in a given set  
Connected Components in an undirected graph  
k’th heaviest adjacent node in a graph where each vertex has weight  
### Maximum Flow :  
Ford-Fulkerson Algorithm for Maximum Flow Problem  
Find maximum number of edge disjoint paths between two vertices  
Find minimum s-t cut in a flow network  
Maximum Bipartite Matching  
Channel Assignment Problem  
Push Relabel- Set 1-Introduction  
Push Relabel- Set 2- Implementation  
Karger’s Algorithm- Set 1- Introduction and Implementation  
Karger’s Algorithm- Set 2 – Analysis and Applications  
Dinic’s algorithm for Maximum Flow  
Max Flow Problem Introduction  
  
### STL Implementation of Algorithms :  
  
Kruskal’s Minimum Spanning Tree using STL in C++  
Prim’s Algorithm using Priority Queue STL  
Dijkstra’s Shortest Path Algorithm using STL  
Dijkstra’s Shortest Path Algorithm using set in STL  
Graph implementation using STL for competitive programming | Set 2 (Weighted graph)  
  
### Hard Problems :  
  
Graph Coloring (Introduction and Applications)  
Greedy Algorithm for Graph Coloring  
Traveling Salesman Problem (TSP) Implementation  
Travelling Salesman Problem (Naive and Dynamic Programming)  
Travelling Salesman Problem (Approximate using MST)  
Vertex Cover Problem | Set 1 (Introduction and Approximate Algorithm)  
K Centers Problem | Set 1 (Greedy Approximate Algorithm)  
Erdos Renyl Model (for generating Random Graphs)  
Clustering Coefficient in Graph Theory  
Chinese Postman or Route Inspection | Set 1 (introduction)  
Hierholzer’s Algorithm for directed graph  
  
### Misc :  
  
Number of triangles in an undirected Graph  
Number of triangles in directed and undirected Graph  
Check whether a given graph is Bipartite or not  
Snake and Ladder Problem  
Minimize Cash Flow among a given set of friends who have borrowed money from each other  
Boggle (Find all possible words in a board of characters)  
Hopcroft Karp Algorithm for Maximum Matching-Introduction  
Hopcroft Karp Algorithm for Maximum Matching-Implementation  
Minimum Time to rot all oranges  
Find same contents in a list of contacts  
Hypercube Graph  
Check for star graph  
Optimal read list for a given number of days  
Print all jumping numbers smaller than or equal to a given value  
Fibonacci Cube Graph  
Barabasi Albert Graph (for Scale Free Models)  
Construct a graph from given degrees of all vertices  
Degree Centrality (Centrality Measure)  
Katz Centrality (Centrality Measure)  
Mathematics | Graph theory practice questions  
2-Satisfiability (2-SAT) Problem  
Determine whether a universal sink exists in a directed graph  
Number of sink nodes in a graph  
Largest subset of Graph vertices with edges of 2 or more colors  
NetworkX : Python software package for study of complex networks  
Generate a graph using Dictionary in Python  
Count number of edges in an undirected graph  
Two Clique Problem (Check if Graph can be divided in two Cliques)  
Check whether given degrees of vertices represent a Graph or Tree  
Finding minimum vertex cover size of a graph using binary search  
Stable Marriage Problem  
Sum of dependencies in a graph  
    