package creational.abstract_factory;

public class Carpenter implements DoorFittingExpert {

    @Override
    public void getDescription() {
        System.out.println("me Carpenter");
    }
}
