package mycodeschool.queue; 

class QueueByArray<T> implements QueueInterface<T>{
    final int MAX_SIZE = 100;
    T[]  arr = (T[]) new Object[MAX_SIZE];
    int front = -1, rear = -1;
    @Override
    public void add(T val) {
        if(rear == MAX_SIZE -1){
            System.out.println("Queue is full cannot add more elements");
        }
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else{
            arr[++rear] = val;
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
            front++;
        }
        return arr[ret];
    }

    @Override
    public int size() {
        return rear - front + 1;
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
        QueueByArray<Integer> queue = new QueueByArray<>();
        queue.add(1);
        queue.add(2);
        queue.add(3);
        queue.add(4);

        queue.print();

        queue.remove();

        queue.print();

        System.out.println(queue.size());
    }
}