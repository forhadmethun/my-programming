package structural.proxy;

public class LabDoor implements Door {
    @Override
    public void open() {
        System.out.println("Open Lab Door!");
    }

    @Override
    public void close() {
        System.out.println("Close Lab Door");
    }
}
