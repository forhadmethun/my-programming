package creational.factory_method;

public class Truck implements Vehicle{
    @Override
    public void design() {
        System.out.println("truck design");
    }

    @Override
    public void manufacture() {
        System.out.println("truck manufacture");
    }
}
