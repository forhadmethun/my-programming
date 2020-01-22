package creational.abstract_factory;

public class AbstractFactoryClient {
    public static void main(String[] args) {
        WoodenDoorFactory woodenDoorFactory = new WoodenDoorFactory();
        Door door = woodenDoorFactory.makeDoor();
        DoorFittingExpert expert= woodenDoorFactory.makeFittingExpert();
        door.getDescription();
        expert.getDescription();

        IronDoorFactory ironDoorFactory = new IronDoorFactory();
        Door door1 = ironDoorFactory.makeDoor();
        DoorFittingExpert expert1= ironDoorFactory.makeFittingExpert();
        door1.getDescription();
        expert1.getDescription();





    }
}
