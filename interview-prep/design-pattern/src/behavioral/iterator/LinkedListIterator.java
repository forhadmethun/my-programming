package behavioral.iterator;

public class LinkedListIterator implements Iterator {
    private LinkedList.Node current;
    public LinkedListIterator(LinkedList.Node head) {
        this.current = head;
    }

    @Override
    public int next() {
        int val = current.data;
        current = current.next;
        return val;
    }

    @Override
    public boolean hasNext() {
        return current != null;
    }
}
