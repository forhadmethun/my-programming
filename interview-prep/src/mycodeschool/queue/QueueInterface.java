package mycodeschool.queue; 
interface QueueInterface<T>{
    void add(T val); 
    T remove(); 
    int size(); 
    T peek();
    boolean isEmpty();
}