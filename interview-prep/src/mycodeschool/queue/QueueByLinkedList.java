package mycodeschool.queue;
class QueueNode<T>{
    T data;
    QueueNode<T> next;
    QueueNode(){}
    QueueNode(T data){
        this.data = data;
        this.next = null;
    }
}
class QueueByLinkedList<T> implements QueueInterface<T>{
    QueueNode<T> front = null;
    QueueNode<T> rear = null;
    int size = 0;

    @Override
    public void add(T val) {
        if(front == null && rear == null){
            rear = new QueueNode<>(val);
            front = rear;
            size++;
            return;
        }
        size++;
        rear.next = new QueueNode(val);
        rear = rear.next;
    }

    @Override
    public T remove() {
        if(front == null) return null;
        size--;
        T removedValue  = front.data;
        if(front == rear){
            front = null;
            rear = null;
        }
        else{
            front = front.next;
        }
        return removedValue;
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public T peek() {
        if(front!=null){
            return front.data;
        }
        else{
            return null;
        }
    }

    @Override
    public boolean isEmpty() {
        return front == rear && front == null;
    }

    public static void main(String[] args) {
        QueueByLinkedList<Integer> queue = new QueueByLinkedList<>();
        queue.add(1);
        queue.add(2);
        System.out.println(queue.peek());
        queue.remove();
        System.out.println(queue.peek());
    }
}