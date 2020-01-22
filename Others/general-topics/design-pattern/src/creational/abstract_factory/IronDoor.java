package creational.abstract_factory;

public class IronDoor implements Door {
    @Override
    public void getDescription() {
        System.out.println("iron door");
    }
}
