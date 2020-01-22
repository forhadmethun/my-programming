package creational.abstract_factory;

public class WoodenDoor implements Door {
    @Override
    public void getDescription() {
        System.out.println("wooden door");
    }
}
