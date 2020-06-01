package behavioral.iterator;

public class IteratorClient {
    public static void main(String[] args) {

        Collection array = new Array(4);

        array.insert(1);
        array.insert(2);
        array.insert(3);
        array.insert(4);

        iterate(array.getIterator());

        Collection list = new LinkedList();
        list.insert(11);
        list.insert(22);
        list.insert(33);
        list.insert(44);
        iterate(list.getIterator());

    }
    static void iterate(Iterator it){
        while(it.hasNext()){
            System.out.print(it.next() + " ");
        }
        System.out.println();
    }
}
