package leetcode.hashmap;
import java.util.*;
public class DesignHashMap_706 {

}

class MyHashMap {
    List<List<Pair>> list = new ArrayList<>();
    int limit = 10000;

    /** Initialize your data structure here. */
    public MyHashMap() {
        for(int i = 0; i < limit; i++){
            list.add(new ArrayList<>());
        }
    }

    /** value will always be non-negative. */
    public void put(int key, int value) {
        int index = hash(key);
        List<Pair> keyList = list.get(index);
        for(Pair pair : keyList){
            if(pair.key == key){
                pair.value = value;
                return;
            }
        }
        keyList.add(new Pair(key,value));
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    public int get(int key) {
        int index = hash(key);
        List<Pair> keyList = list.get(index);
        for(Pair pair : keyList){
            if(pair.key == key){
                return pair.value;
            }
        }
        return -1;
    }
    int hash(int key){
        return key % limit;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    public void remove(int key) {
        int index = hash(key);
        List<Pair> keyList = list.get(index);
        Pair removablePair = null;
        for(Pair pair : keyList){
            if(pair.key == key){
                removablePair = pair;
                break;
            }
        }
        if(removablePair!=null){
            keyList.remove(removablePair);
        }
    }
    class Pair{
        int key, value;
        Pair(int key, int value){
            this.key = key;
            this.value = value;
        }
    }
}