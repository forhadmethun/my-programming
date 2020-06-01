package behavioral.iterator;

public class ArrayIterator implements Iterator {
    int[] arr;
    int len;
    int pos;
    public ArrayIterator(int[] arr, int len) {
        this.arr = arr;
        this.len = len;
        pos = -1;
    }

    @Override
    public int next() {
        return arr[++pos];
    }

    @Override
    public boolean hasNext() {
        return pos + 1 < len;
    }
}
