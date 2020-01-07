package topic_wise.datastructure.array;

public class DynamicArray {
    int arr[];
    int capacity = 2;
    int size = 0;
    void add(int value){
        if(size < capacity){
            arr[size++] = value;
        }
        else{
            capacity = capacity * 2;
            int[] newArray = createNewArray(capacity);
            copyToNewArray(newArray, arr);
            arr = newArray;
            arr[size++] = value;
        }
    }
    int[] createNewArray(int capacity){
        return new int[capacity];
    }
    void copyToNewArray(int[] newArray, int[] oldArray){
        for(int i = 0; i < size; i++){
            newArray[i] = oldArray[i];
        }
    }
    DynamicArray(){
        arr = createNewArray(capacity);
    }
    int get(int index){
        if(index < 0 || index >= size) return Integer.MIN_VALUE;
        return arr[index];
    }
    void print(){
        for(int i = 0; i < size; i++){
            System.out.printf("%d ", arr[i]);
        }
        System.out.println();
    }

    void set(int index, int value){
        arr[index] = value;
    }
    void remove(int index){
        if(size <= 0)return;
        for(int i = index + 1; i < size; i++){
            arr[i-1] = arr[i];
        }
        arr[size - 1] = 0;
        size--;

        if(size * 2 < capacity){
            capacity = capacity / 2;
            int[] newArray = createNewArray(capacity);
            copyToNewArray(newArray, arr);
            arr = newArray;
        }

    }
    boolean isEmpty(){
        return size == 0;
    }
    int getCapacity(){
        return capacity;
    }
    int size(){
        return size();
    }
    int pop(){
        int lastValue = arr[size - 1];
        arr[size - 1] = 0;
        size--;
        return lastValue;
    }

    void resize(int capacity){
        int[] newArray = createNewArray(capacity);
        copyToNewArray(newArray, arr);
        arr = newArray;
    }
    int find(int item){
        for(int i = 0; i < size; i++){
            if(arr[i] == item) return i;
        }
        return -1;
    }
    void removeItem(int item){
        for(int i = 0; i < size; i++){
            if(arr[i] == item) {
                remove(i);
                return;
            }
        }
    }
    void prepend(int value){
        if(size < capacity){
            for(int i = size; i >=1; i --){
                arr[i] = arr[i-1];
            }
        }
        else{
            capacity = capacity * 2;
            int[] newArray = createNewArray(capacity);
            copyToNewArray(newArray, arr);
            arr = newArray;
            for(int i = size; i >=1; i --){
                arr[i] = arr[i-1];
            }
        }
        arr[0] = value;
        size++ ;
    }


    public static void main(String[] args) {
        DynamicArray dynamicArray = new DynamicArray();
        dynamicArray.add(1);
        dynamicArray.add(2);
        dynamicArray.add(3);
        dynamicArray.add(4);
        dynamicArray.add(5);
        dynamicArray.add(6);
        dynamicArray.print();
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.remove(0);
        dynamicArray.print();
        dynamicArray.prepend(2);
        dynamicArray.print();
        dynamicArray.prepend(3);
        dynamicArray.prepend(4);
        dynamicArray.print();
    }

}
