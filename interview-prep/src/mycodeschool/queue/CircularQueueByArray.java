package mycodeschool.queue; 

class CircularQueueByArray<T> implements QueueInterface<T>{
    final int MAX_SIZE = 3;
    T[]  arr = (T[]) new Object[MAX_SIZE];
    int front = -1, rear = -1;
    @Override
    public void add(T val) {
        if((rear+1)%MAX_SIZE == front){ // if the array is full
            return;
        }
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else{
            arr[(rear+1)%MAX_SIZE] = val;
            rear = (rear + 1) %MAX_SIZE;
        }
    }

    @Override
    public T remove() {
        if(front == -1 && rear == -1){
            return null;
        }
        int ret = front;
        if(front == rear){
            front = -1;
            rear = -1;
            return arr[ret];
        }else{
            front = (front + 1) % MAX_SIZE;
        }
        return arr[ret];
    }

    @Override
    public int size() {
        return Math.abs(rear - front) + 1;
    }

    @Override
    public T peek() {
        if(front>=0) return arr[front];
        return null;
    }

    @Override
    public boolean isEmpty() {
        return front == rear && front == -1;
    }

    void print(){
        for(int i = front; i <= rear; i++){
            if( i >=0){
                System.out.printf("%d ", arr[i]);
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        CircularQueueByArray<Integer> queue = new CircularQueueByArray<>();
        queue.add(1);
        queue.add(2);
        queue.add(3);

        queue.print();

        queue.remove();
        queue.add(4);

        queue.print();
        queue.remove();
        queue.print();

        queue.add(5);
        queue.add(5);
        queue.print();

        System.out.println(queue.size());
    }
}