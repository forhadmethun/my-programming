###Stack & Queues  
 
 --- 
- easier to handle
- some problems are slight modification of the original data structure
- some may have much more complex challenges
##### Implementing Stack
- a stack of data
- sometimes it is favourable than array 
- LIFO > like stack of dinner plate, the most recent item added to the stack is the first item to be removed
- operations: 
  - pop()
  - push(item)
  - peek()
  - isEmpty()
- insertion and deletion constant but search not
- stacks are often useful is in certain recursive algorithm 
- can be used to implement a recursive algorithm iteratively. 

##### Implement Queue 
- FIFO > queue at a ticket stand, items removed from the data structure in the same order that they are added. 
- operations:
  - add(item)
  - remove()
  - peek()
  - isEmpty()
- often used in BFS or cache implementation
  - in bfs we store a list of nodes that we need to process.   

### Questions 

--- 
- [x] ~~Q3.1 How use single array to implement three stack(partially)~~  

- [x] ~~Q3.2 Design stack with min operation in O(1)(will not work if pop operation applied)~~

- [x] ~~Q3.3 Create new stack if the previous stack exceeds some threshold. In whole those stacks operate like single stack for operation like pop() etc. (need to check the functionality)~~

- [x] ~~Q3.4 Implement queue with two stacks~~

- [x] ~~Q3.5 Sort a stack with another stack only~~

- [ ] Q3.6 Implement queue of dogs or cats with operation enqueue, dequeueAny, dequeueDog, dequeueCat