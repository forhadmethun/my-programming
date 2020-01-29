package behavioral.observer;

import java.util.ArrayList;
import java.util.List;

public class CompleteOrderTopic implements Topic {
    List<Observer> observerList = new ArrayList<>();
    @Override
    public void register(Observer obj) {
        observerList.add(obj);
    }

    @Override
    public void notifyObserver(String line) {
        for(Observer o : observerList){
            o.update(line);
        }
    }
}
