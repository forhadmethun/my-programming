package behavioral.iterator;

public class Array implements Collection {
    int size;
    int arr[];
    int len;
    @Override
    public void insert(int data) {
        arr[len++] = data;
    }

    @Override
    public Iterator getIterator() {
        return new ArrayIterator(arr, len);
    }
    Array(int size){
        this.size = size;
        arr = new int[size];
        len = 0;
    }
}
