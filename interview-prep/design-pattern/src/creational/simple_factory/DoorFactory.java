package creational.simple_factory;

public class DoorFactory {
    public static Door makeDoor(int height, int width){
        return new WoodenDoor(height, width);
    }

    public static void main(String[] args) {
        Door woodenDoor = DoorFactory.makeDoor(100,200);
        System.out.println("h :"+ woodenDoor.getHeight() + ", w:" + woodenDoor.getWidth());
    }
}
