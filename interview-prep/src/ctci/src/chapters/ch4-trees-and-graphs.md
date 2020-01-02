### Trees & Graphs 

--- 

##### Binary Tree vs. Binary Search Tree 
- BST is a binary tree in which every node fits the ordering - 
  - all left descendents <= n < all right descendents
  ``` 
       8            
      / \
    4     10
   / \     \
  2   6     20
       BST
       
        8            
       / \
     4     10
    / \     \
   2   12     20
        BT 
        
  ```
  - when given tree questions be careful to ask about the question is related to BT or BST
##### Balanced vs. Unbalanced Tree 
 - a tree is balanced if each subtree is balanced and the height of the two sub-trees differ by at most one. 
   - the constraints is generally applied recursively to every subtree. A tree is only balanced if:
     - the left & right subtrees' height differ by at most one.
     - the left subtree is balanced 
     - the right subtree is balanced 
     ``` 
     Yes, A Balanced Tree Example:
     
             A (h=3)
          /     \
      B(h=1)     C (h=2)        
     /          /   \
     D (h=0)  E(h=0)  F (h=1)
                    /
                   G (h=0)
     No, Not A Balanced Tree Example:
     
             A (h=3)
          /     \
      B(h=0)     C (h=2)        <-- Unbalanced: 2-0 =2 > 1
                /   \
             E(h=1)  F (h=0)
             /     \
           H (h=0)   G (h=0)      
     
     ```
##### Complete Binary Trees
 - a binary tree in which every level of the tree is fully filled, except for perhaps the last level. To th extent the last level is filled, it is filled left to right. 
 
##### Full Binary Tree
 - a binary tree in which every node has either two or zero children

##### Perfect Binary Tree
 - a tree that is both full & complete
 - do not assume as binary tree as perfect 
 
### Binary Tree Traversal 
 - prior to interview the in-order, pre-order, post-order traversal must be known 
 
### Binary Heaps( Min-Heaps & Max-Heaps)
 -  min or max
 - Min-Heaps
   - complete binary tree
   - insert()
     - insert bottom  right to keep the property of complete binary tree
   - extract_min()
     - replace bottom right element with root
     - do swap with smallest elements until mean heap property restored
     
### Trie 
 - n-ary tree where characters are stored in each node 
 - store entire language to easy lookup 
   - O(k) time to find k length string 

### Graph 
 - representation 
   - adjacency list
   - adjacency matrix 
 - Graph Search
   - BFS     
   - DFS 
   - Bidirectional Search 
   
 
 
### Questions 
 
 --- 
- [ ] Q4.1 In directed graph design algorithm to find if there is a route between two nodes or not

- [ ] Q4.2 Create binary search tree of minimal height from a sorted array with unique elements

- [ ] Q4.3 Create list of link lists of each node at each depth

- [ ] Q4.4 Check if a binary tree is balanced

- [ ] Q4.5 Check if a binary tree is BST

- [ ] Q4.6 Find next node(in order) of a given node in a binary search tree

- [ ] Q4.7 List of projects and list of pair of dependencies are given where dependencies must be build before project. Find a build order if not found show error. 
    
  ```
  projects: a, b, c, d, e, f
  dependencies: (a, d), (f, b), (b, d), (f, a), (d, c)  
  
  Output: f, e, a, b, d, c
  ```
- [ ] Q4.8 Find first common ancestor of two nodes in binary tree

- [ ] Q4.9 Given a binary search tree, print all possible arrays that could have led to this tree

- [ ] Q4.10 Given two binary Tree T1 & T2 where T1 > T2. Check if T2 is subtree of T1

- [ ] Q4.11 Implement binary tree class with functionality -  insert(), find(), delete(), getRandomNode()

- [ ] Q4.12 Count number of paths that sum to a given value in a binary tree of + or - numbers. 

