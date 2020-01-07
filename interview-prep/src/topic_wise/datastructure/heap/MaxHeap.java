package topic_wise.datastructure.heap;

import java.util.*;

public class MaxHeap {
    public static void main(String[] args) {
        MaxHeap heap1 = new MaxHeap();
        heap1.insert(10);
        System.out.println(heap1.getMax());
        heap1.insert(15);
        System.out.println(heap1.getMax());
        heap1.insert(20);
        System.out.println(heap1.getMax());
        heap1.insert(8);
        System.out.println(heap1.getMax());
        System.out.println(heap1.extractMax());
        System.out.println(heap1.remove(1));

        int a[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
        MaxHeap heap2 = new MaxHeap(a);
        heap2.heapSort();
        System.out.println(heap2.getMax());

    }

    List<Integer> heapList = new ArrayList<>();
    int[] heapArray = null;
    int heapArraySize = 0;
    void insert(int data){
        heapList.add(data);
        shiftUp(heapList.size() - 1);
    }
    void shiftUp(int index){
        while(index != 0 && heapList.get((index - 1) / 2) < heapList.get(index)){
            int temp = heapList.get((index - 1) / 2);
            heapList.set((index - 1) / 2, heapList.get(index));
            heapList.set(index, temp);
            index = (index - 1) / 2;
        }
    }
    void shiftDown(int index){
        while(2 * index + 1 < heapList.size()){ // while left children exist
            int maxChildIndex = 0 , minChildIndex = 0;
            if(2 * index + 2 < heapList.size()){ // it has both left and right child
                 if(heapList.get(2 * index + 1) > heapList.get(2 * index + 2)){
                     maxChildIndex = 2 * index + 1;
                     minChildIndex = 2 * index + 2;
                 }else{
                     maxChildIndex = 2 * index + 2;
                     minChildIndex = 2 * index + 1;
                 }

            }else{ //if has only left child
                maxChildIndex = 2 * index + 1;
            }

            if(heapList.get(index) > heapList.get(maxChildIndex)){ // break if current node is greater than both of its child
                break;
            }

            int temp = heapList.get(index);
            heapList.set(index, heapList.get(maxChildIndex));
            heapList.set(maxChildIndex, temp);
            index = maxChildIndex;
        }
    }
    void shiftDownInArray(int index){
        while(2 * index + 1 < heapArraySize){ // while left children exist
            int maxChildIndex = 0 , minChildIndex = 0;
            if(2 * index + 2 < heapArraySize){ // it has both left and right child
                if(heapArray[2 * index + 1] > heapArray[2 * index + 2]){
                    maxChildIndex = 2 * index + 1;
                    minChildIndex = 2 * index + 2;
                }else{
                    maxChildIndex = 2 * index + 2;
                    minChildIndex = 2 * index + 1;
                }

            }else{ //if has only left child
                maxChildIndex = 2 * index + 1;
            }

            if(heapArray[index] > heapArray[maxChildIndex]){ // break if current node is greater than both of its child
                break;
            }

            int temp = heapArray[index];
            heapArray[index] = heapArray[maxChildIndex];
            heapArray[maxChildIndex] = temp;
            index = maxChildIndex;
        }
    }
    int getMax(){
        return heapList.get(0); //handle exception
    }
    int extractMax(){
        return remove(0);
    }
    int getSize(){
        return heapList.size();
    }
    boolean isEmpty(){
        return heapList.size() == 0;
    }
    int remove(int index){
        int element = heapList.get(index);
        heapList.set(index, heapList.get(heapList.size() - 1));
        shiftDown(index);
        heapList.remove(heapList.size() - 1);
        return element;
    }
    void buildMaxHeap(){
        for(int i = heapList.size() / 2; i >= 0; i--){
            shiftDown(i);
        }
    }
    void buildMaxHeapInArray(){
        for(int i = heapArray.length / 2; i >= 0; i--){
            shiftDownInArray(i);
        }
    }
    MaxHeap(){}
    MaxHeap(int[] arr){
        for(int a: arr){
            heapList.add(a);
        }
        buildMaxHeap();
        this.heapArray = arr;
        this.heapArraySize = arr.length;
        buildMaxHeapInArray();
    }
    void heapSort(){
        //the array already heapified
        for(int i = heapArraySize - 1; i >= 0; i--){
            int temp = heapArray[i];
            heapArray[i] = heapArray[0];
            heapArray[0] = temp;
            heapArraySize--;
            shiftDownInArray(0);
        }
    }

}
