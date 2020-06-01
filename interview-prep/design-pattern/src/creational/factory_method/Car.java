package creational.factory_method;

public class Car implements Vehicle {
    @Override
    public void design() {
        System.out.println("car design");
    }

    @Override
    public void manufacture() {
        System.out.println("car manufacture");
    }
}
