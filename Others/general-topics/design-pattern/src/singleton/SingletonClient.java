package singleton;

public class SingletonClient {
    public static void main(String[] args) {
        Singleton s1 = Singleton.getInstance();
        s1.printObj();
        Singleton s2 = Singleton.getInstance();
        s2.printObj();
    }
}
