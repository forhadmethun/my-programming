package behavioral.observer;

public interface Topic {
   void  register(Observer obj);
   void notifyObserver(String line);

}
