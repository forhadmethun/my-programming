### Design HashTable 
 - interview-prep/src/anki-coding/hash-table/hash-table.py
   - maintain hashFunction and array of list of pair(key, value)
   - before setting a key check if the key exist then update else append

### Design LRU Cache
 - maintain a linked list to monitor the last item
 - maintain a hashmap of query, nodeto check if the query/key already exist in the map
 - the cache has a max size if the linked list element size reach the max size and need to add more elements then remove the last item from the linkedlist and from hashmap also

### Design Call Center
 - Employee
 - Operator
 - Supervisor
 - Director
 - Call
   - which rank employee will take
   - state
 - CallState
 - CallCenter
   - init()
     - take all the employees
   - dispatchCall()
     - call another method which will check which employees are free then assign the call to the employee
 - [ref](https://github.com/donnemartin/system-design-primer/blob/master/solutions/object_oriented_design/call_center/call_center.ipynb)

### Design Card Deck
 - enum Suit
 - class Card
   - suit
   - faceValue
 - class CardDeck
   - init()
     - for(i = 0; i <= 13; i++){ for(Suit suit: Suit.values()){cardDeck.add(new Card(suit, i))}}

 - [ref](https://www.youtube.com/watch?v=lDa8I7iA5FA)


### Design Parking Lot
 - ParkingLot
 - Levels
 - ParkingSpot
 - Vehicle
 - MotorCycle
 - Bus
 - Car
 - VehicleSize: enum
 - VehicleType: enum
### Design Online Chat
 - User
 - UserService
 - Chat
   - PrivateChat
   - GroupChat
 - Message
 - AddRequest
 - RequestStatus


### Class Diagram
 - [ref](https://www.youtube.com/watch?v=UI6lqHOVHic)
   - class box
     - has properties
     - has methods
     - all the methods and properties have their visibility
   - inheritance
     - up triangle
   - association
     - human eats food. this is basic association nothing serious
     - has relationship
   - aggregation
     - class aggregates student. but sometimes some students can leave so we can say it's aggregation
     - shown by empty diamond
   - composition
     - ex1: building is composition of rooms, toilet etc. if building breaks all the other related things will break. so it's composition
     - ex2: if a user is destroyed from a shopping website then all of his shopping carts and orders will be destroyed so this relationships are composition
     - representes with filled diamond

### Use Case Diagram
 - [ref](https://www.youtube.com/watch?v=zid-MVo7M-E)
 - Main components are:
   - System, Actors, User Case, Relationships
 - System
   - whatever you are developing
     - website
     - app
     - software component
     - business porcess
 - Actors
  - two types of actors
    - primary actors: who initiate request to the system. put left side of the use case diagram
    - secondary actors: who respond to the request. put right side of the use case diagram
  - can be:
   - person
   - organization
   - another system
   - external device
 - Use Case
   - action that accomplish some sort of task
 - Relationships
   - associations
   - include
     - if a use case need another one to fulfil
     - base case     ----->  include case
     - ex: login --> verify password
   - extend
     - if a usecase execute sometimes but not always
     - base case <----- extend case
     - ex: login <--- show error in error password
   - generalization
     - parent child
     - may also be in actors also
     - may contain extended include
 