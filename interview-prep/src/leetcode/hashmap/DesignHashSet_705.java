package leetcode.hashmap;
import java.util.*;
public class DesignHashSet_705 {
}

class MyHashSet {
    List<List<Pair>> list = new ArrayList<>();
    int limit = 10000;
    /** Initialize your data structure here. */
    public MyHashSet() {
        for(int i = 0; i < limit; i++){
            list.add(new ArrayList<>());
        }
    }

    int hash(int key){
        return key % limit;
    }

    public void add(int key) {
        int index = hash(key);
        List<Pair> keyList = list.get(index);
        for(Pair pair : keyList){
            if(pair.key == key){
                return;
            }
        }
        keyList.add(new Pair(key,0));
    }

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

    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
        int index = hash(key);
        List<Pair> keyList = list.get(index);
        for(Pair pair : keyList){
            if(pair.key == key){
                return true;
            }
        }
        return false;
    }
    class Pair{
        int key, value;
        Pair(int key, int value){
            this.key = key;
            this.value = value;
        }
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */
